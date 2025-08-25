#include<iostream>
#include "QueStacks.h"

using namespace std;

QueStacks::QueStacks(){

}

void QueStacks::Enqueue(int x) {
    s1.Push(x);
}

int QueStacks::Dequeue() {
    int value, first;

    while(!s1.IsEmpty()) {
        value = s1.Top();
        s1.Pop();
        s2.Push(value);
    }

    first = s2.Top();
    s2.Pop();
    return first;
}

bool QueStacks::IsEmpty(){
    return(s1.IsEmpty() && s2.IsEmpty());
}
