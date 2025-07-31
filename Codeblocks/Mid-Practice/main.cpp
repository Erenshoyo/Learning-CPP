#include <iostream>
#include "unsortedType.cpp"
#include "StudentInfo.h"

using namespace std;

int main()
{
    UnsortedType<int> intList;

    intList.InsertItem(5);
    intList.InsertItem(7);
    intList.InsertItem(6);
    intList.InsertItem(9);

    int temp;
    intList.ResetList();
    for (int i = 0; i < intList.LengthIs(); i++) {
        intList.GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl;

    cout << "Length: " << intList.LengthIs() << endl;

    intList.InsertItem(1);

    intList.ResetList();
    for (int i = 0; i < intList.LengthIs(); i++) {
        intList.GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl;

    int checkVals[] = {4, 5, 9, 10};
    for (int i = 0; i < 4; i++) {
        int x = checkVals[i];
        bool found;
        intList.RetrieveItem(x, found);
        if (found)
            cout << "Item is found" << endl;
        else
            cout << "Item is not found" << endl;
    }

    if (intList.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;

    intList.DeleteItem(5);

    if (intList.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;

    intList.DeleteItem(1);

    intList.ResetList();
    int values[5];
    int n = intList.LengthIs();
    for (int i = 0; i < n; i++) {
        intList.GetNextItem(values[i]);
    }

    int expectedOrder1[] = {7, 6, 9};
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < n; j++) {
            if (values[j] == expectedOrder1[i]) {
                cout << values[j] << " ";
                break;
            }
        }
    }
    cout << endl;


    intList.DeleteItem(6);


    intList.ResetList();
    n = intList.LengthIs();
    for (int i = 0; i < n; i++) {
        intList.GetNextItem(values[i]);
    }


    int expectedOrder2[] = {7, 9};
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            if (values[j] == expectedOrder2[i]) {
                cout << values[j] << " ";
                break;
            }
        }
    }
    cout << endl;

    return 0;
}

/*#include <iostream>
#include "unsortedType.cpp"
#include "StudentInfo.h"

using namespace std;

int main()
{
    UnsortedType<int> intList;
    intList.InsertItem(5);
    intList.InsertItem(7);
    intList.InsertItem(6);
    intList.InsertItem(9);

    int temp;

    for(int i = 0; i < intList.LengthIs(); i++)
    {
        intList.GetNextItem(temp);
        cout << temp << " ";
    }

    cout << "Length: " << intList.LengthIs() << endl;

    intList.ResetList();

    intList.InsertItem(1);
    for(int i = 0; i < intList.LengthIs(); i++)
    {
        intList.GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl;
    int arr[5];
    intList.ResetList();
    for(int i = 0; i < intList.LengthIs(); i++)
    {
        int item;
        intList.GetNextItem(item);
        arr[i] = item;
    }
    for(int i = 0; i < 5; i++)
    {
        int val = arr[i];
        bool f;
        intList.RetrieveItem(val, f);
        if (f == 1) cout << "Item is found" << endl;
        else cout << "Item is not found" << endl;
    }

    if(intList.IsFull())
    {
        cout << "List is full" << endl;
    }
    else
    {
        cout << "List is not full" << endl;
    }

    intList.DeleteItem(5);

    if(intList.IsFull())
    {
        cout << "List is full" << endl;
    }
    else
    {
        cout << "List is not full" << endl;
    }

    intList.DeleteItem(1);
    intList.ResetList();

    for(int i = 0; i < intList.LengthIs(); i++)
    {
        intList.GetNextItem(temp);
        cout << temp << " ";
    }

    cout << endl;

    intList.DeleteItem(6);
    intList.ResetList();
    for(int i = 0; i < intList.LengthIs(); i++)
    {
        intList.GetNextItem(temp);
        cout << temp << " ";
    }

    cout << endl;

    return 0;
}*/

