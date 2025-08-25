#include <iostream>
#include "QueStacks.h"

using namespace std;

int main()
{
    QueStacks q;

    int n, value;

    cout << "Enter the number of the elements: ";
    cin >> n;

    cout << "Enter elements: " ;

    for(int i = 0; i < n; i++){
        cin >> value;
        q.Enqueue(value);
    }

    for(int i = 0; i < n; i++) {
        cout << q.Dequeue() << " ";
    }

    return 0;
}
