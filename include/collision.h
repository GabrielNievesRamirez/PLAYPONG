// Collision.h
#ifndef COLLISION_H
#define COLLISION_H

#include "Paddle.h"
#include "Ball.h"
#include <SFML/Audio.hpp>

class Collision {
private:
    Ball& ball;
    Paddle& paddle1;
    Paddle& paddle2;
    sf::Sound& paddleSound;
    sf::Sound& scoreSound;

public:
    Collision(Ball& ball, Paddle& paddle1, Paddle& paddle2, sf::Sound& paddleSound, sf::Sound& scoreSound);

    void CheckCollision();
    void UpdateScore(int p1Score, int p2Score, sf::RenderWindow& window);
};

#endif // COLLISION_H
