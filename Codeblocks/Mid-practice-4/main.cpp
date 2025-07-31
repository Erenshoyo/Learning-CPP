#include <iostream>

using namespace std;

void task1() {
    int size;
    cout << "Enter the size of the integer array: ";
    cin >> size;

    int *arr = new int[size];

    cout << "Enter " << size << " integers: \n";

    for (int i = 0; i < size; i++){
        cout << "Element " << i << ": ";
        cin >> arr[i];
    }

    cout << "\nYou entered:\n";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    delete[] arr;
}

void task2() {
    int rows, cols;
    cout << "\nEnter the number of rows: ";
    cin >> rows;
    cout << "Enter number of columns(length of each string): ";
    cin >> cols;

    char **arr = new char*[rows];
    for(int i = 0; i < rows; i++){
        cout << "String " << i <<": ";
        cin >> arr[i];
    }

    cout << "\nYou entered:\n";
    for(int i = 0; i < rows; i++){
        cout << arr[i] << endl;
    }

    for (int i = 0; i < rows; i++){
        delete[] arr[i];
    }
    delete[] arr;
}

void task3() {
    int rows;
    cout << "\nEnter number of rows: ";
    cin >> rows;

    int **arr = new int *[rows];
    int *cols = new int [rows];

    for(int i = 0; i < rows; i++){
        cout << "enter number of elements in row" << i << ": ";
        cin >> cols[i];
        arr[i] = new int [cols[i]];

        cout << "Enter " << cols[i] << " integers for row " << i << ":\n";
        for(int j = 0; j < cols[i]; j++){
            cout << "Element [" << i <<"][" << j <<"j: ";
            cin >> arr[i][j];
        }

    }

    cout << "\nYou entered:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols[i]; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++){
        delete[] arr[i];
    }
    delete[] arr;
    delete[] cols;
}
int main()
{
    cout << "Task 1: 1D Integer Array\n";
    task1();
    cout << "Task 2: 2D Integer Array\n";
    task2();
    cout << "Task 3: Uneven 2D Integer Array\n";
    task3();

    return 0;
}
