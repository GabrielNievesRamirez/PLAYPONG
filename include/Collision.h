#ifndef COLLISION_H
#define COLLISION_H

#include <SFML/Graphics.hpp>
#ifndef NO_AUDIO
#include <SFML/Audio.hpp>
#endif
#include "Ball.h"
#include "Paddle.h"

class Collision {
public:
    #ifndef NO_AUDIO
    Collision(Ball& ball, Paddle& paddle1, Paddle& paddle2, sf::Sound& paddleSound, sf::Sound& scoreSound);
    #else
    Collision(Ball& ball, Paddle& paddle1, Paddle& paddle2);
    #endif

    void CheckCollision();
    void UpdateScore(int score1, int score2, sf::RenderWindow& window);

private:
    Ball& ball;
    Paddle& paddle1;
    Paddle& paddle2;
    #ifndef NO_AUDIO
    sf::Sound& paddleSound;
    sf::Sound& scoreSound;
    #endif
};

#endif // COLLISION_H
