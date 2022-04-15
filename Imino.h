#ifndef IMINO_H_
#define IMINO_H_

#include "Tetrimino.h"

class Imino : public Tetrimino {
    private : 
        TETRIMINO_DIR direction;

    public :
        Imino(void);
        Imino(Imino &mino);
        virtual ~Imino(void);
        virtual bool next_shape(void);
};

#endif
