#ifndef OMINO_H_
#define OMINO_H_

#include "Tetrimino.h"

class Omino : public Tetrimino {
private:
    TETRIMINO_DIR direction;

public:
    Omino(void);
    Omino(Omino &mino);
    virtual ~Omino(void);
    virtual bool next_shape(void);
};

#endif
