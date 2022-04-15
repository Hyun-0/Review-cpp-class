#ifndef ZMINO_H_
#define ZMINO_H_

#include "Tetrimino.h"

class Zmino : public Tetrimino {
private:
    TETRIMINO_DIR direction;

public:
    Zmino(void);
    Zmino(Zmino &mino);
    virtual ~Zmino(void);
    virtual bool next_shape(void);
};

#endif
