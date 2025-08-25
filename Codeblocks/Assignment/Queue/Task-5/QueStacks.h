#ifndef QUESTACKS_H_INCLUDED
#define QUESTACKS_H_INCLUDED

#include "StackType.cpp"


class QueStacks {
    StackType<int> s1, s2;

public:
    QueStacks();
    void Enqueue(int x);
    int Dequeue();
    bool IsEmpty();
};

#endif // QUESTACKS_H_INCLUDED
