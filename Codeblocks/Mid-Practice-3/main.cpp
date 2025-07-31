#include <iostream>
#include "sortedtype.cpp"
using namespace std;

int main()
{
    SortedType<int> l;

    cout << l.LengthIs() << endl;

    l.InsertItem(5);
    l.InsertItem(7);
    l.InsertItem(4);
    l.InsertItem(2);
    l.InsertItem(1);

    for(int i = 0; i < l.LengthIs(); i++){
        int temp;
        l.GetNextItem(temp);
        cout << temp << " ";
    }

    cout << endl;

    int x1 = 6;
    bool f1;
    l.RetrieveItem(x1, f1);

    if(f1 == 1) cout << "Item is found" << endl;
    else cout << "Item is not found" << endl;

    int x2 = 5;
    bool f2;
    l.RetrieveItem(x2, f2);

    if(f2 == 1) cout << "Item is found" << endl;
    else cout << "Item is not found" << endl;

    if(l.IsFull() == 1) cout << "List is full" << endl;
    else cout << "List is not full" << endl;

    l.DeleteItem(1);

    l.ResetList();
    for(int i = 0; i < l.LengthIs(); i++){
        int temp;
        l.GetNextItem(temp);
        cout << temp << " ";
    }

    cout << endl;

    if(l.IsFull() == 1) cout << "List is full" << endl;
    else cout << "List is not full" << endl;


    return 0;
}
