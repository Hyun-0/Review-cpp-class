#ifndef TMINO_H_
#define TMINO_H_

#include "Tetrimino.h"

class Tmino : public Tetrimino {
private:
    TETRIMINO_DIR direction;

public:
    Tmino(void);
    Tmino(Tmino &mino);
    virtual ~Tmino(void);
    virtual bool next_shape(void);
};

#endif
