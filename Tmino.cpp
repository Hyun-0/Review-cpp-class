#include "Tmino.h"

Tmino::Tmino(void) : direction(LEFT) {
    this->tetrimino[2][0] = 'O';
    this->tetrimino[2][1] = 'O';
    this->tetrimino[2][2] = 'O';
    this->tetrimino[3][1] = 'O';

    return;
}


Tmino::Tmino(Tmino &mino) : direction(LEFT) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            this->tetrimino[i][j] = mino.tetrimino[i][j];
        }
    }

    return;
}


Tmino::~Tmino(void) {
    this->direction = LEFT;

    return;
}


bool Tmino::next_shape(void) {
    switch (this->direction)
    {
    case LEFT:
        this->tetrimino[2][0] = ' ';
        this->tetrimino[2][1] = ' ';
        this->tetrimino[2][2] = ' ';
        this->tetrimino[3][1] = ' ';

        this->tetrimino[1][1] = 'O';
        this->tetrimino[2][1] = 'O';
        this->tetrimino[2][2] = 'O';
        this->tetrimino[3][1] = 'O';
        break;

    case DOWN:
        this->tetrimino[1][1] = ' ';
        this->tetrimino[2][1] = ' ';
        this->tetrimino[2][2] = ' ';
        this->tetrimino[3][1] = ' ';

        this->tetrimino[1][1] = 'O';
        this->tetrimino[2][0] = 'O';
        this->tetrimino[2][1] = 'O';
        this->tetrimino[2][2] = 'O';
        break;

    case RIGHT:
        this->tetrimino[1][1] = ' ';
        this->tetrimino[2][0] = ' ';
        this->tetrimino[2][1] = ' ';
        this->tetrimino[2][2] = ' ';

        this->tetrimino[1][1] = 'O';
        this->tetrimino[2][0] = 'O';
        this->tetrimino[2][1] = 'O';
        this->tetrimino[3][1] = 'O';
        break;

    case UP:
        this->tetrimino[1][1] = ' ';
        this->tetrimino[2][0] = ' ';
        this->tetrimino[2][1] = ' ';
        this->tetrimino[3][1] = ' ';

        this->tetrimino[2][0] = 'O';
        this->tetrimino[2][1] = 'O';
        this->tetrimino[2][2] = 'O';
        this->tetrimino[3][1] = 'O';
        break;

    default:
        break;
    }
    this->direction = (TETRIMINO_DIR)((this->direction + 1) % 4);

    return false;
}
