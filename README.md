### README para el juego PlayPong

#### Visión General
PlayPong es una implementación simple del clásico juego Pong utilizando SFML (Simple and Fast Multimedia Library). Permite a dos jugadores controlar paletas y competir entre sí para anotar puntos al hacer pasar una pelota más allá de la paleta del oponente.

#### Características
- **Juego para Dos Jugadores**: Los jugadores controlan las paletas usando entradas del teclado ('W', 'S' para el Jugador 1 y flechas para el Jugador 2).
- **Inicio del Juego**: Presiona 'Espacio' para iniciar o reiniciar el juego.
- **Detección de Colisiones**: Maneja colisiones entre paletas, paredes y la pelota.
- **Seguimiento de Puntuación**: Registra y muestra la puntuación de ambos jugadores.
- **Fin del Juego**: Detecta cuando un jugador alcanza la puntuación ganadora y termina el juego.

#### Requisitos
- Biblioteca SFML para C++
- Archivos de sonido (`paddle.wav`, `wall.wav`, `score.wav`) para efectos de juego

#### Instalación y Configuración
1. **Instalación de SFML**: Asegúrate de tener SFML instalado en tu sistema. Puedes descargarlo desde [Descargas de SFML](https://www.sfml-dev.org/download.php).
   
2. **Compilar y Ejecutar**:
   - Compila el código utilizando tu compilador de C++ preferido con SFML enlazado.
   - Asegúrate de colocar los archivos de sonido (`paddle.wav`, `wall.wav`, `score.wav`) en el mismo directorio que el ejecutable o ajusta las rutas de los archivos en el código según sea necesario.

#### Controles
- **Jugador 1 (Paleta Izquierda)**:
  - Mover Arriba: `W`
  - Mover Abajo: `S`
  
- **Jugador 2 (Paleta Derecha)**:
  - Mover Arriba: Flecha Arriba
  - Mover Abajo: Flecha Abajo
  
- **Controles Generales**:
  - Iniciar Juego: `Espacio`
  - Salir del Juego: `Esc` o cerrar la ventana

#### Cómo Jugar
1. **Ejecuta el juego** después de compilarlo correctamente.
2. **Presiona `Espacio`** para iniciar el juego.
3. **Usa los controles mencionados** para mover las paletas y golpear la pelota.
4. **Gana puntos** al hacer pasar la pelota más allá de la paleta del oponente.
5. **El juego termina** cuando un jugador alcanza la puntuación determinada como la puntuación ganadora.

#### Imágenes
A continuación se muestran algunas imágenes del juego:

- **Paleta de Jugador 1 (Paleta Izquierda)**:
  ![Paleta de Jugador 1](stick_1.png)

- **Paleta de Jugador 2 (Paleta Derecha)**:
  ![Paleta de Jugador 2](stick_2.png)

- **Bola del Juego**:
  ![Bola del Juego](ball.png)

- **Marcador de Puntuación**:
  ![Marcador de Puntuación](score.png)

---

Este README proporciona una descripción general del juego PlayPong, incluyendo imágenes de las paletas, la bola y el marcador de puntuación utilizados para una mejor comprensión del juego.
