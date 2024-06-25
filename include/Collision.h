#ifndef COLLISION_H
#define COLLISION_H

#include <SFML/Graphics.hpp>
#include "Ball.h"
#include "Paddle.h"

class Collision {
public:
    Collision(Ball& ball, Paddle& paddle1, Paddle& paddle2); // Constructor sin sonidos

    void CheckCollision();
    void UpdateScore(int score1, int score2, sf::RenderWindow& window);

private:
    Ball& ball;
    Paddle& paddle1;
    Paddle& paddle2;
};

#endif // COLLISION_H
