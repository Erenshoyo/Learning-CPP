#include <iostream>
#include "binarysearchtree.cpp"

using namespace std;

int main()
{
    TreeType<int> tree;

    int n;
    cout <<"Number of elements: ";
    cin >> n;


    cout << "Enter Elements: ";
    for(int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        tree.InsertItem(val);
    }

    tree.Print();
    return 0;
}
