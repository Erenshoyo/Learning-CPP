#include <iostream>

using namespace std;

void delete_sorted_array(int a[], int &length, int key)
{
    int pos = -1;

    if (length == 0)
    {
        cout << "Array does not exist";
        return;
    }

    for (int i = 0; i < length; i++)
    {
        if (a[i] == key)
        {
            pos = i;
            break;
        }
    }

    if (pos == -1)
    {
        cout << "Key does not exist in the array.";
        return;
    }

    for (int i = pos; i < length - 1; i++)
    {
        a[i] = a[i + 1];
    }

    length--;
}

int main()
{
    int size = 10;
    int arr[size] = {10, 20, 30, 40, 50};
    int length = 5;
    int key = 30;

    delete_sorted_array(arr, length, key);

    cout << "Sorted array after deletion: ";
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
}