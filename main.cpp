#include <iostream>
#include "Tetrimino.h"
#include "Imino.h"
using namespace std;

int main(void) {

    Tetrimino *tetrimino = new Imino();
    
    for (int i = 0; i < 5; i++) {
        system("cls");

        cout << "Tetris Tetriminos\n" << endl;
        tetrimino->show_mino();
        tetrimino->next_shape();

        getchar();
    }

    delete tetrimino;

    return 0;
}