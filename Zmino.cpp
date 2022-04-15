#include "Zmino.h"

Zmino::Zmino(void) : direction(LEFT) {
    this->tetrimino[2][0] = 'O';
    this->tetrimino[2][1] = 'O';
    this->tetrimino[3][1] = 'O';
    this->tetrimino[3][2] = 'O';

    return;
}


Zmino::Zmino(Zmino &mino) : direction(LEFT) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            this->tetrimino[i][j] = mino.tetrimino[i][j];
        }
    }

    return;
}


Zmino::~Zmino(void) {
    this->direction = LEFT;

    return;
}


bool Zmino::next_shape(void) {
    switch (this->direction)
    {
    case LEFT:
    case RIGHT:
        this->tetrimino[2][0] = ' ';
        this->tetrimino[2][1] = ' ';
        this->tetrimino[3][1] = ' ';
        this->tetrimino[3][2] = ' ';

        this->tetrimino[1][2] = 'O';
        this->tetrimino[2][2] = 'O';
        this->tetrimino[2][1] = 'O';
        this->tetrimino[3][1] = 'O';
        break;

    case DOWN:
    case UP:
        this->tetrimino[1][2] = ' ';
        this->tetrimino[2][2] = ' ';
        this->tetrimino[2][1] = ' ';
        this->tetrimino[3][1] = ' ';

        this->tetrimino[2][0] = 'O';
        this->tetrimino[2][1] = 'O';
        this->tetrimino[3][1] = 'O';
        this->tetrimino[3][2] = 'O';
        break;

    default:
        break;
    }
    this->direction = (TETRIMINO_DIR)((this->direction + 1) % 4);

    return false;
}