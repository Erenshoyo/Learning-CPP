#ifndef TIMESTAMP_H_INCLUDED
#define TIMESTAMP_H_INCLUDED

#include <iostream>
using namespace std;

class timestamp{
public:
    int seconds;
    int minutes;
    int hours;

    timestamp();
    timestamp(int s, int m, int h);
    void print();

    bool operator < (const timestamp&) const;
    bool operator == (const timestamp&) const;
};

#endif // TIMESTAMP_H_INCLUDED
