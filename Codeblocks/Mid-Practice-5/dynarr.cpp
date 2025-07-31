#include "dynarr.h"
#include <iostream>

using namespace std;

dynArr::dynArr() {
    data = NULL;
    rows = 0;
    cols = 0;
}

dynArr::dynArr(int r, int c) {
    rows = r;
    cols = c;
    data = new int*[rows];
    for(int i = 0; i < rows; i++){
        data[i] = new int[cols];
    }
}

dynArr::~dynArr(){
    if (data != NULL){
        for (int i = 0; i < rows; i++){
            delete[] data[i];
        }
        delete[] data;
    }
}

void dynArr::allocate(int r, int c) {
    if(data != NULL){
        for(int i = 0; i < rows; i++){
            delete[] data[i];
        }
        delete[] data;
    }
    rows = r;
    cols = c;
    data = new int*[rows];
    for(int i = 0; i < rows; i++){
        data[i] = new int[cols];
    }
}

void dynArr::setValue(int i, int j, int value){
    data[i][j] = value;
}

int dynArr::getValue(int i, int j) {
    return data[i][j];
}
