#ifndef SCORE_H
#define SCORE_H

#include <SFML/Graphics.hpp>

class Score {
private:
    // Aquí podrías definir cualquier miembro necesario para tu clase Score

public:
    Score() {}

    void CreateNumberSprites(sf::RenderWindow& window);
    void UpdateScoreDisplay(int score1, int score2, sf::RenderWindow& window);
};

inline void Score::CreateNumberSprites(sf::RenderWindow& window) {
    // Implementación de la función CreateNumberSprites
    // Aquí iría tu lógica para crear los sprites de los números
}

inline void Score::UpdateScoreDisplay(int score1, int score2, sf::RenderWindow& window) {
    // Implementación de la función UpdateScoreDisplay
    // Aquí iría tu lógica para actualizar la pantalla de puntuación
}

#endif // SCORE_H
