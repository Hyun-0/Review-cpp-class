#include "Omino.h"

Omino::Omino(void) : direction(LEFT) {
    this->tetrimino[2][0] = 'O';
    this->tetrimino[2][1] = 'O';
    this->tetrimino[3][0] = 'O';
    this->tetrimino[3][1] = 'O';

    return;
}


Omino::Omino(Omino &mino) : direction(LEFT) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            this->tetrimino[i][j] = mino.tetrimino[i][j];
        }
    }

    return;
}


Omino::~Omino(void) {
    this->direction = LEFT;

    return;
}


bool Omino::next_shape(void) {
    this->direction = (TETRIMINO_DIR)((this->direction + 1) % 4);

    return false;
}