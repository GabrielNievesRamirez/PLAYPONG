#ifndef COLLISION_H
#define COLLISION_H

#include <SFML/Graphics.hpp>

class Ball;
class Paddle;

class Collision {
private:
    Ball& ball;
    Paddle& paddle1;
    Paddle& paddle2;
    sf::Sound& paddleSound;
    sf::Sound& scoreSound;

public:
    Collision(Ball& b, Paddle& p1, Paddle& p2, sf::Sound& ps, sf::Sound& ss)
        : ball(b), paddle1(p1), paddle2(p2), paddleSound(ps), scoreSound(ss) {}

    void CheckCollision();
    void UpdateScore(int score1, int score2, sf::RenderWindow& window);
};

inline void Collision::CheckCollision() {
    // Implementación de la función CheckCollision
    // Aquí iría tu lógica para la detección de colisiones
}

inline void Collision::UpdateScore(int score1, int score2, sf::RenderWindow& window) {
    // Implementación de la función UpdateScore
    // Aquí iría tu lógica para actualizar el marcador
}

#endif // COLLISION_H
