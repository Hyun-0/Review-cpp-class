#ifndef TETRIMINO_H_
#define TETRIMINO_H_

class Tetrimino {
    protected:
        char tetrimino[4][4];

    public:
        Tetrimino(void);
        Tetrimino(Tetrimino &mino);
        virtual ~Tetrimino(void);

        void show_mino(void);
        virtual bool next_shape(void) = 0;
};

#endif