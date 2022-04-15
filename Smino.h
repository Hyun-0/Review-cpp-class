#ifndef SMINO_H_
#define SMINO_H_

#include "Tetrimino.h"

class Smino : public Tetrimino {
private:
    TETRIMINO_DIR direction;

public:
    Smino(void);
    Smino(Smino &mino);
    virtual ~Smino(void);
    virtual bool next_shape(void);
};

#endif
