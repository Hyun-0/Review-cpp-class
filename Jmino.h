#ifndef JMINO_H_
#define JMINO_H_

#include "Tetrimino.h"

class Jmino : public Tetrimino {
private:
    TETRIMINO_DIR direction;

public:
    Jmino(void);
    Jmino(Jmino &mino);
    virtual ~Jmino(void);
    virtual bool next_shape(void);
};

#endif
