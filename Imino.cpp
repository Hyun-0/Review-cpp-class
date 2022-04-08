#include "Imino.h"

Imino::Imino(void) : direction(LEFT){
    this->tetrimino[0][0] = 'O';
    this->tetrimino[1][0] = 'O';
    this->tetrimino[2][0] = 'O';
    this->tetrimino[3][0] = 'O';

    return;
}


Imino::Imino(Imino &mino) : direction(LEFT) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            this->tetrimino[i][j] = mino.tetrimino[i][j];
        }
    }

    return;
}


Imino::~Imino(void) {
    this->direction = LEFT;

    return;
}


bool Imino::next_shape(void) {
    switch (this->direction)
    {
        case LEFT:
            this->tetrimino[0][0] = ' ';
            this->tetrimino[1][0] = ' ';
            this->tetrimino[2][0] = ' ';
            this->tetrimino[3][0] = ' ';

            this->tetrimino[3][0] = 'O';
            this->tetrimino[3][1] = 'O';
            this->tetrimino[3][2] = 'O';
            this->tetrimino[3][3] = 'O';
            break;

        case DOWN:
            this->tetrimino[3][0] = ' ';
            this->tetrimino[3][1] = ' ';
            this->tetrimino[3][2] = ' ';
            this->tetrimino[3][3] = ' ';

            this->tetrimino[0][3] = 'O';
            this->tetrimino[1][3] = 'O';
            this->tetrimino[2][3] = 'O';
            this->tetrimino[3][3] = 'O';
            break;

        case RIGHT:
            this->tetrimino[0][3] = ' ';
            this->tetrimino[1][3] = ' ';
            this->tetrimino[2][3] = ' ';
            this->tetrimino[3][3] = ' ';

            this->tetrimino[0][0] = 'O';
            this->tetrimino[0][1] = 'O';
            this->tetrimino[0][2] = 'O';
            this->tetrimino[0][3] = 'O';
            break;

        case UP:
            this->tetrimino[0][0] = ' ';
            this->tetrimino[0][1] = ' ';
            this->tetrimino[0][2] = ' ';
            this->tetrimino[0][3] = ' ';

            this->tetrimino[0][0] = 'O';
            this->tetrimino[1][0] = 'O';
            this->tetrimino[2][0] = 'O';
            this->tetrimino[3][0] = 'O';
            break;

        default:
            break;
    }
    this->direction = (TETRIMINO_DIR)((this->direction + 1) % 4);

    return false;
}