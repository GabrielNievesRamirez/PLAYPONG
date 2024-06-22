// Paddle.h
#ifndef PADDLE_H
#define PADDLE_H

#include <SFML/Graphics.hpp>

class Paddle {
private:
    sf::Vector2f pos;
    sf::Texture texture;
    float speed;
    int direction;
    int score;

public:
    void InitPaddle(std::string filename);
    void MovePaddle(Ball& ball);
    void DrawPaddle(sf::RenderWindow& window);

    void SetPosition(sf::Vector2f position);
    void SetSpeed(float speed);
    void SetDirection(int dir);
    void SetScore(int score);

    sf::Vector2f GetPosition() const;
    float GetSpeed() const;
    int GetDirection() const;
    int GetScore() const;
};

#endif // PADDLE_H
