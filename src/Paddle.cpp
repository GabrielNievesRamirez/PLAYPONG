// Paddle.cpp
#include <iostream>
#include "Paddle.h"

void Paddle::InitPaddle(std::string filename) {
    if (!texture.loadFromFile(filename)) {
        std::cerr << "Error loading paddle texture!" << std::endl;
    }
}

void Paddle::MovePaddle(Ball& ball) { // Corregir para que acepte Ball&
    // Implementación de MovePaddle utilizando el objeto Ball pasado por referencia
    // Aquí puedes implementar la lógica para que la paleta siga la posición de la pelota, por ejemplo
    sf::Vector2f ballPos = ball.GetPosition();
    pos.y = ballPos.y; // Mover la paleta a la misma altura que la pelota
}

void Paddle::DrawPaddle(sf::RenderWindow& window) {
    // Implementación de DrawPaddle
    sf::Sprite sprite(texture);
    sprite.setPosition(pos);
    window.draw(sprite);
}

void Paddle::SetPosition(sf::Vector2f position) {
    pos = position;
}

void Paddle::SetSpeed(float speed) {
    this->speed = speed;
}

void Paddle::SetDirection(int dir) {
    direction = dir;
}

void Paddle::SetScore(int score) {
    this->score = score;
}

sf::Vector2f Paddle::GetPosition() const {
    return pos;
}

float Paddle::GetSpeed() const {
    return speed;
}

int Paddle::GetDirection() const {
    return direction;
}

int Paddle::GetScore() const {
    return score;
}
