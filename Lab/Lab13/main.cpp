#include <iostream>
#include "binarysearchtree.cpp"

using namespace std;

void balanced(TreeType<int> &balance, int arr[], int l, int r)
{
    if (l > r)
    {
        return;
    }

    int mid = (l + r) / 2;

    balance.InsertItem(arr[mid]);
    balanced(balance, arr, l, mid - 1);
    balanced(balance, arr, mid + 1, r);
}

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
        while (!isFinished)
        {
            tree.GetNextItem(temp, IN_ORDER, isFinished);
            cout << temp << " ";
        }
        cout << endl;
    }

    {
        int temp;
        bool isFinished = false;
        tree.ResetTree(PRE_ORDER);
        while (!isFinished)
        {
            tree.GetNextItem(temp, PRE_ORDER, isFinished);
            cout << temp << " ";
        }
        cout << endl;
    }

    {
        int temp;
        bool isFinished = false;
        tree.ResetTree(POST_ORDER);
        while (!isFinished)
        {
            tree.GetNextItem(temp, POST_ORDER, isFinished);
            cout << temp << " ";
        }
        cout << endl;
    }
    tree.MakeEmpty();
    cout << tree.LengthIs() << endl;

    TreeType<int> tree1, balance;

    int temp, i = 0;
    bool finished = false;
    int arr1[10];

    for (int i = 0; i < 10; i++)
    {
        cin >> temp;
        tree1.InsertItem(temp);
    }

    tree1.ResetTree(IN_ORDER);
    while (!finished)
    {
        tree1.GetNextItem(temp, IN_ORDER, finished);
        arr1[i++] = temp;
    }

    for (int i : arr1)
    {
        cout << i << " ";
    }

    cout << endl;

    balanced(balance, arr1, 0, 9);

    finished = false;

    balance.ResetTree(PRE_ORDER);

    while (!finished)
    {
        balance.GetNextItem(temp, PRE_ORDER, finished);
        cout << temp << " ";
    }
    cout << endl;

    return 0;
}