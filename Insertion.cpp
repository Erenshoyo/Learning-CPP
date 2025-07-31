#include <iostream>

using namespace std;

void bubbleSort(int a[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void unsortedInsert(int a[], int &length, int size, int key, int position)
{
    if (length >= size)
    {
        cout << "Array is full.";
    }
    if (position < 1 || position > length + 1)
    {
        cout << "Invalid position.";
    }

    for (int i = length; i >= position; i--)
    {
        a[i] = a[i - 1];
    }

    a[position - 1] = key;
    length++;
}

void sortedInsert(int a[], int &length, int size, int key)
{
    if (length >= size)
    {
        cout << "Array is full.";
    }

    int position = length;

    for (int i = 0; i < length; i++)
    {
        if (key < a[i])
        {
            position = i;
            break;
        }
    }

    for (int i = length; i > position; i--)
    {
        a[i] = a[i - 1];
    }

    a[position] = key;
    length++;
}

void printArray(int a[], int length, string comment)
{
    cout << comment << ": ";
    for (int i = 0; i < length; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

int main()
{
    const int size = 10;

    int a[size] = {5, 7, 6, 9};
    int us_length = 4;

    printArray(a, us_length, "Original Array");

    unsortedInsert(a, us_length, size, 8, 3);

    printArray(a, us_length, "Array after unsorted insertion");

    bubbleSort(a, us_length);
    int s_length = us_length;

    printArray(a, s_length, "Array after Bubble sort");

    sortedInsert(a, s_length, size, 4);

    printArray(a, s_length, "Array after sorted insertion");

    return 0;
}