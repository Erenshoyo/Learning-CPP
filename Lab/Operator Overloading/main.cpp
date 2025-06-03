#include <iostream>
#include "complex.h"

using namespace std;

int main()
{
    Complex a(5, 7);
    Complex b(2, 1);

    a.Print();
    b.Print();

    Complex sum = a + b;
    sum = a.add(b);

    sum.Print();
}