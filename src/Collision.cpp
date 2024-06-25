#include "Collision.h"
#include <SFML/Graphics.hpp>  // Incluye los encabezados de SFML necesarios

Collision::Collision(Ball& ball, Paddle& paddle1, Paddle& paddle2)
    : ball(ball), paddle1(paddle1), paddle2(paddle2) {
    // Implementación del constructor si es necesario
}

void Collision::CheckCollision() {
    // Implementación de la función CheckCollision
}

void Collision::UpdateScore(int score1, int score2, sf::RenderWindow& window) {
    // Implementación de la función UpdateScore
    sf::Font font;  // Debes crear una instancia de sf::Font y cargarla si no lo has hecho ya
    font.loadFromFile("ruta/al/archivo/de/font.ttf");  // Ajusta la ruta según donde tengas tu archivo de fuente

    sf::Text text1, text2;
    text1.setFont(font);
    text2.setFont(font);
    text1.setString("Score: " + std::to_string(score1));
    text2.setString("Score: " + std::to_string(score2));
    text1.setCharacterSize(24);
    text2.setCharacterSize(24);
    text1.setFillColor(sf::Color::White);
    text2.setFillColor(sf::Color::White);
    text1.setPosition(20, 20);
    text2.setPosition(window.getSize().x - 120, 20);

    window.draw(text1);
    window.draw(text2);
}
