// Score.h
#ifndef SCORE_H
#define SCORE_H

#include <SFML/Graphics.hpp>

class Score {
private:
    sf::Texture texture;
    sf::Sprite sprite;

public:
    Score();

    void CreateNumberSprites(sf::RenderWindow& window);
    void UpdateScoreDisplay(int score1, int score2, sf::RenderWindow& window);
};

#endif // SCORE_H
