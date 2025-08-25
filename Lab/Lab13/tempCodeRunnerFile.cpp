#include <iostream>
#include "binarysearchtree.cpp"

using namespace std;

int main()
{
    TreeType<int> tree;

    cout << (tree.IsEmpty() ? "Tree is Empty." : "Tree is not Empty") << endl;

    int arr[] = {4, 9, 2, 7, 3, 11, 17, 0, 5, 1};

    for (int i : arr)
        tree.InsertItem(i);

    cout << (tree.IsEmpty() ? "Tree is Empty." : "Tree is not Empty") << endl;

    cout << tree.LengthIs() << endl;

    int key1 = 9;
    bool isFound1 = false;

    tree.RetrieveItem(key1, isFound1);

    cout << (isFound1 ? "Item is Found." : "Item is not Found.") << endl;

    int key2 = 13;
    bool isFound2 = false;

    tree.RetrieveItem(key2, isFound2);

    cout << (isFound2 ? "Item is Found." : "Item is not Found.") << endl;
    {
        int temp;
        bool isFinished = false;
        tree.ResetTree(IN_ORDER);
        while(!isFinished){
            tree.GetNextItem(temp, IN_ORDER, isFinished);
            cout << temp << " ";
        }
        cout << endl;
    }

    {
        int temp;
        bool isFinished = false;
        tree.ResetTree(PRE_ORDER);
        while(!isFinished){
            tree.GetNextItem(temp, PRE_ORDER, isFinished);
            cout << temp << " ";
        }
        cout << endl;
    }

    {
        int temp;
        bool isFinished = false;
        tree.ResetTree(POST_ORDER);
        while(!isFinished){
            tree.GetNextItem(temp, POST_ORDER, isFinished);
            cout << temp << " ";
        }
        cout << endl;
    }
    tree.MakeEmpty();
    cout << tree.LengthIs() << endl;

    return 0;
}