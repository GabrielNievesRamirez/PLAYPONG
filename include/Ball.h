// Ball.h
#ifndef BALL_H
#define BALL_H

#include <SFML/Graphics.hpp>

class Ball {
private:
    sf::Vector2f pos;
    sf::Texture texture;
    sf::Vector2f speed;

public:
    void InitBall(std::string filename);
    void MoveBall();
    void DrawBall(sf::RenderWindow& window);

    void SetPosition(sf::Vector2f position);
    void SetSpeed(sf::Vector2f speed);

    sf::Vector2f GetPosition() const;
    sf::Vector2f GetSpeed() const;
};

#endif // BALL_H
