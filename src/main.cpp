#include <SFML/Window.hpp>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <iostream>
#include "Paddle.h"       // Cambiado a Paddle.h según la clase refactorizada
#include "Ball.h"
#include "Collision.h"
#include "Score.h"
#include "GameOver.h"

using namespace sf;

int W = 1280, H = 720;

int main() {
    // Sound Effects
    SoundBuffer buf_0, buf_1, buf_2;
    buf_0.loadFromFile("paddle.wav");
    buf_1.loadFromFile("wall.wav");
    buf_2.loadFromFile("score.wav");
    Sound paddle, wall, score;
    paddle.setBuffer(buf_0);
    wall.setBuffer(buf_1);
    score.setBuffer(buf_2);

    // Window
    RenderWindow window(VideoMode(W, H), "Pong!");
    window.setKeyRepeatEnabled(true);
    window.setVerticalSyncEnabled(false);

    // Initializing Paddles
    Paddle paddles[2];
    paddles[0].setPosition(Vector2f(20, 305));
    paddles[1].setPosition(Vector2f(W - 20 - 20, 305));
    paddles[0].initPaddle("stick_1.png");
    paddles[1].initPaddle("stick_2.png");
    paddles[0].setSpeed(1.f);
    paddles[1].setSpeed(1.f);
    paddles[0].setDirection(2);
    paddles[1].setDirection(2);
    paddles[0].setScore(0);
    paddles[1].setScore(0);

    // Initializing Ball
    Ball ball;
    ball.setPosition(Vector2f(626, 346));
    ball.initBall("ball.png");
    ball.setSpeed(Vector2f(0, 0));

    // Score Text
    Texture scText;
    Sprite scoreSprite;
    scText.loadFromFile("score.png");
    scoreSprite.setTexture(scText);
    scoreSprite.setPosition(546, 35);
    createNumberSprites(window);

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
        if (Keyboard::isKeyPressed(Keyboard::W)) paddles[0].setDirection(0);
        else if (Keyboard::isKeyPressed(Keyboard::S)) paddles[0].setDirection(1);
        else paddles[0].setDirection(2);

        if (Keyboard::isKeyPressed(Keyboard::Up)) paddles[1].setDirection(0);
        else if (Keyboard::isKeyPressed(Keyboard::Down)) paddles[1].setDirection(1);
        else paddles[1].setDirection(2);

        // Start The Game By Pressing "SPACE"
        if (Keyboard::isKeyPressed(Keyboard::Space))
        {
            whoStartsTheGame(paddles[0], paddles[1], ball);
        }

        // Check Collision
        Collision(ball, paddles[1], paddles[0], paddle, score, paddles[0].getScore(), paddles[1].getScore());

        paddles[0].movePaddle(ball); 
        paddles[1].movePaddle(ball);
        ball.moveBall();
        gameOver(ball, paddles[0], paddles[1]);
        updateScore(paddles[0].getScore(), paddles[1].getScore(), window);
        
        // Draw
        paddles[0].drawPaddle(window);
        paddles[1].drawPaddle(window);
        ball.drawBall(window);
        window.draw(scoreSprite);
        
        // Display
        window.display();
    }

    return 0;
}
