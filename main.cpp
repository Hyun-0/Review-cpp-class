#include <iostream>
#include "Tetrimino.h"
#include "Imino.h"
#include "Omino.h"
#include "Zmino.h"
#include "Smino.h"
#include "Jmino.h"
#include "Lmino.h"
#include "Tmino.h"
using namespace std;

int main(void) {

    Tetrimino *tetrimino = NULL;
    int num = 0;
    char a;
    
    while (num != -1) {
        while ((num < 1 || num > 7) && num != -1) {
            cout << "Choose Type of Tetrimino you want\n";
            cout << "1. Imino\n";
            cout << "2. Omino\n";
            cout << "3. Zmino\n";
            cout << "4. Smino\n";
            cout << "5. Jmino\n";
            cout << "6. Lmino\n";
            cout << "7. Tmino\n";
            cout << "-1. Exit\n";
            cout << ">> " << flush;
            cin >> num;

            if (cin.fail() == true) {
                cin.clear();
            }
            while (cin.get() != '\n');
            system("cls");
        }

        switch (num)
        {
        case 1:
            tetrimino = new Imino;
            break;

        case 2:
            tetrimino = new Omino;
            break;

        case 3:
            tetrimino = new Zmino;
            break;

        case 4:
            tetrimino = new Smino;
            break;

        case 5:
            tetrimino = new Jmino;
            break;

        case 6:
            tetrimino = new Lmino;
            break;

        case 7:
            tetrimino = new Tmino;
            break;

        default:
            break;
        }

        if (num >= 1 && num <= 7) {
            cout << "Tetris Tetriminos\n" << endl;
            for (int i = 0; i < 4; i++) {
                cout << endl;
                tetrimino->show_mino();
                tetrimino->next_shape();
                while (cin.get() != '\n');
            }

            delete tetrimino;
            tetrimino = NULL;
            num = 0;
        }

        system("cls");
    }

    return 0;
}