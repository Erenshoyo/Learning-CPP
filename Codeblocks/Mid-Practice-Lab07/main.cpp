#include <iostream>
#include "sortedtype.cpp"
#include "timestamp.h"

using namespace std;

int main()
{
    SortedType<timestamp> t;

    t.InsertItem(timestamp(15, 34, 23));
    t.InsertItem(timestamp(13, 13, 02));
    t.InsertItem(timestamp(43, 45, 12));
    t.InsertItem(timestamp(25, 36, 17));
    t.InsertItem(timestamp(52, 02, 20));

    timestamp temp;
    for(int i = 0; i < t.LengthIs(); i++){
        t.GetNextItem(temp);
        temp.print();
    }

    t.DeleteItem(timestamp(25, 36, 17));

    cout << endl << endl << endl << endl;

    t.ResetList();
    timestamp temp1;
    for(int i = 0; i < t.LengthIs(); i++){
        t.GetNextItem(temp1);
        temp1.print();
    }
}
