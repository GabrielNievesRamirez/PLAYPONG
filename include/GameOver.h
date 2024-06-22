// GameOver.h
#ifndef GAMEOVER_H
#define GAMEOVER_H

#include "Ball.h"
#include "Paddle.h"
#include <SFML/Graphics.hpp>

class GameOver {
public:
    static void CheckGameOver(Ball& ball, Paddle& paddle1, Paddle& paddle2);
    static void DrawGameOverScreen(sf::RenderWindow& window);
};

#endif // GAMEOVER_H
