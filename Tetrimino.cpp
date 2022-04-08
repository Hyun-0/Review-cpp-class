#include <iostream>
using namespace std;

#include "Tetrimino.h"


Tetrimino::Tetrimino(void) {
    for (int i = 0; i < 4; i++) {
        for (auto &data : this->tetrimino[i]) {
            data = ' ';
        }
    }

    return;
}

Tetrimino::Tetrimino(Tetrimino &mino) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            this->tetrimino[i][j] = mino.tetrimino[i][j];
        }
    }

    return;
}

Tetrimino::~Tetrimino(void) {
    for (int i = 0; i < 4; i++) {
        for (auto &data : this->tetrimino[i]) {
            data = 0;
        }
    }

    return;
}


void Tetrimino::show_mino(void) {
    for (int i = 0; i < 4; i++) {
        for (auto &data : this->tetrimino[i]) {
            cout << data << flush;
        }
        cout << endl;
    }
}