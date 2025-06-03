#include <iostream>
#include "dynarr.cpp"

using namespace std;

int main()
{
    // dynArr<float> a(5);
    // dynArr<float> b(5);
    dynArr<char> b(5);

    for (int i = 0; i < 5; i++)
    {
        // a.setValue(i, 1.1 * i);
        b.setValue(i, i + 'a');
    }

    for (int i = 0; i < 5; i++)
    {
        // cout << a.getValue(i) << " ";
        cout << b.getValue(i) << " ";
    }
}