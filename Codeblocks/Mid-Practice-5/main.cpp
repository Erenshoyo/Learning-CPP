#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
    //Task 1
    cout << "Task-1\n";
    dynArr obj1;
    dynArr obj2(1, 5);

    cout << "Enter 5 values:\n";
    for (int i = 0; i < 5; i++) {
        int val;
        cin >> val;
        obj2.setValue(0, i, val);
    }

    cout << "Value in obj2: ";
    for(int i = 0; i < 5; i++){
        int val;
        cin >> val;
        obj2.setValue(0, i, val);
    }

    cout << "values in obj2: ";
    for(int i = 0; i < 5; i++){
        cout << obj2.getValue(0, i) << " ";
    }
    cout << "\n";
    return 0;
}
