#include<iostream>

using namespace std;

void deletion_unsorted_array(int a[], int &length, int key){
    int pos = -1;

    if(length == 0){
        cout << "Array does not exist." << endl;
        return;
    }
    
    for(int i = 0; i < length; i++){
        if(a[i] == key){
            pos = i;
        }
    }
    a[pos] = a[length - 1];
  
    length--;
}

int main(){
    int size = 10;
    int arr[size] = {5, 2, 10, 15, 11};
    int length = 5;
    int key = 10;

    deletion_unsorted_array(arr, length, key);

    cout << "Updated array: ";
    for(int i = 0; i < length; i++){
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}