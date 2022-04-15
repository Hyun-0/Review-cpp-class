#ifndef LMINO_H_
#define LMINO_H_

#include "Tetrimino.h"

class Lmino : public Tetrimino {
private:
    TETRIMINO_DIR direction;

public:
    Lmino(void);
    Lmino(Lmino &mino);
    virtual ~Lmino(void);
    virtual bool next_shape(void);
};

#endif
