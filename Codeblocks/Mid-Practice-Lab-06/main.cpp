#include <iostream>
#include "unsortedtype.cpp"

using namespace std;

int main()
{
    int m, n;
    cin >> m;

    int* a = new int[m];
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }

    cin >> n;
    int* b = new int[n];
    for (int i = 0; i < n; i++){
        cin >> b[i];
    }

    int* merged = new int [ m + n ];
    int i = 0, j = 0, k = 0;

    while (i < m && j < n){
        if ( a[i] < b[j])
            merged[k++] = a[i++];
        else
            merged[k++] = b[j++];
    }
    while ( i < m) merged[k++] = a[i++];
    while ( j < n) merged[k++] = b[j++];

    UnsortedType<int> list;

    for(int x = m + n -1; x >= 0; x--) {
        list.InsertItem(merged[x]);
    }
    list.ResetList();
    int item;
    for (int i = 0; i < list.LengthIs(); i++) {
        list.GetNextItem(item);
        cout << item << " ";
    }
    cout << endl;

    delete[] a;
    delete[] b;
    delete[] merged;

    return 0;
}
