#include "Lmino.h"

Lmino::Lmino(void) : direction(LEFT) {
    this->tetrimino[2][0] = 'O';
    this->tetrimino[2][1] = 'O';
    this->tetrimino[2][2] = 'O';
    this->tetrimino[3][0] = 'O';

    return;
}


Lmino::Lmino(Lmino &mino) : direction(LEFT) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            this->tetrimino[i][j] = mino.tetrimino[i][j];
        }
    }

    return;
}


Lmino::~Lmino(void) {
    this->direction = LEFT;

    return;
}


bool Lmino::next_shape(void) {
    switch (this->direction)
    {
    case LEFT:
        this->tetrimino[2][0] = ' ';
        this->tetrimino[2][1] = ' ';
        this->tetrimino[2][2] = ' ';
        this->tetrimino[3][0] = ' ';

        this->tetrimino[1][1] = 'O';
        this->tetrimino[2][1] = 'O';
        this->tetrimino[3][1] = 'O';
        this->tetrimino[3][2] = 'O';
        break;

    case DOWN:
        this->tetrimino[1][1] = ' ';
        this->tetrimino[2][1] = ' ';
        this->tetrimino[3][1] = ' ';
        this->tetrimino[3][2] = ' ';

        this->tetrimino[0][2] = 'O';
        this->tetrimino[1][0] = 'O';
        this->tetrimino[1][1] = 'O';
        this->tetrimino[1][2] = 'O';
        break;

    case RIGHT:
        this->tetrimino[0][2] = ' ';
        this->tetrimino[1][0] = ' ';
        this->tetrimino[1][1] = ' ';
        this->tetrimino[1][2] = ' ';

        this->tetrimino[1][0] = 'O';
        this->tetrimino[1][1] = 'O';
        this->tetrimino[2][1] = 'O';
        this->tetrimino[3][1] = 'O';
        break;

    case UP:
        this->tetrimino[1][0] = ' ';
        this->tetrimino[1][1] = ' ';
        this->tetrimino[2][1] = ' ';
        this->tetrimino[3][1] = ' ';

        this->tetrimino[2][0] = 'O';
        this->tetrimino[2][1] = 'O';
        this->tetrimino[2][2] = 'O';
        this->tetrimino[3][0] = 'O';
        break;

    default:
        break;
    }
    this->direction = (TETRIMINO_DIR)((this->direction + 1) % 4);

    return false;
}
