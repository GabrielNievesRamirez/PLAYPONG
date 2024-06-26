#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include "Paddle.h"
#include "Ball.h"
#include "Collision.h"
#include "Score.h"
#include "GameOver.h"

using namespace sf;

int W = 1280, H = 720;

void whoStartsTheGame(Paddle& paddle1, Paddle& paddle2, Ball& ball) {
    // Lógica para determinar quién inicia el juego
    // Esto es un ejemplo y deberías implementar tu propia lógica aquí
    ball.SetSpeed(Vector2f(5.f, 5.f)); // Ejemplo de velocidad inicial
}

int main() {
    // Window
    RenderWindow window(VideoMode(W, H), "Pong!");
    window.setKeyRepeatEnabled(true);
    window.setVerticalSyncEnabled(false);

    // Initializing Paddles
    Paddle paddles[2];
    paddles[0].SetPosition(Vector2f(20, 305));
    paddles[1].SetPosition(Vector2f(W - 20 - 20, 305));
    paddles[0].InitPaddle("stick_1.png");
    paddles[1].InitPaddle("stick_2.png");
    paddles[0].SetSpeed(1.f);
    paddles[1].SetSpeed(1.f);
    paddles[0].SetDirection(2);
    paddles[1].SetDirection(2);
    paddles[0].SetScore(0);
    paddles[1].SetScore(0);

    // Initializing Ball
    Ball ball;
    ball.SetPosition(Vector2f(626, 346));
    ball.InitBall("ball.png");
    ball.SetSpeed(Vector2f(0, 0));

    // Initializing Collision
    Collision collision(ball, paddles[0], paddles[1]);

    // Score Display
    Score scoreDisplay;
    scoreDisplay.CreateNumberSprites(window);

    while (window.isOpen())
    {
        Event event;
        while (window.pollEvent(event))
        {
            if (event.type == Event::Closed || Keyboard::isKeyPressed(Keyboard::Escape))
                window.close();
        }

        window.clear(Color::Black);

        // Game Input Logic
        if (Keyboard::isKeyPressed(Keyboard::W)) paddles[0].SetDirection(0);
        else if (Keyboard::isKeyPressed(Keyboard::S)) paddles[0].SetDirection(1);
        else paddles[0].SetDirection(2);

        if (Keyboard::isKeyPressed(Keyboard::Up)) paddles[1].SetDirection(0);
        else if (Keyboard::isKeyPressed(Keyboard::Down)) paddles[1].SetDirection(1);
        else paddles[1].SetDirection(2);

        // Start The Game By Pressing "SPACE"
        if (Keyboard::isKeyPressed(Keyboard::Space))
        {
            whoStartsTheGame(paddles[0], paddles[1], ball);
        }

        // Check Collision
        collision.CheckCollision();

        // Move Paddles and Ball
        paddles[0].MovePaddle(ball);
        paddles[1].MovePaddle(ball);
        ball.MoveBall();

        // Check Game Over
        GameOver::CheckGameOver(ball, paddles[0], paddles[1]);

        // Update Score
        collision.UpdateScore(paddles[0].GetScore(), paddles[1].GetScore(), window);
        
        // Draw
        paddles[0].DrawPaddle(window);
        paddles[1].DrawPaddle(window);
        ball.DrawBall(window);
        scoreDisplay.UpdateScoreDisplay(paddles[0].GetScore(), paddles[1].GetScore(), window);
        
        // Display
        window.display();
    }

    return 0;
}
