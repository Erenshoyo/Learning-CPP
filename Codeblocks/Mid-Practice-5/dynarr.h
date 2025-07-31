#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

class dynArr {
private:
    int **data;
    int rows;
    int cols;
public:
    dynArr();
    dynArr(int r, int c);
    ~dynArr();
    void allocate (int r, int c);
    void setValue(int i, int j, int value);
    int getValue(int i, int j);
};

#endif // DYNARR_H_INCLUDED
