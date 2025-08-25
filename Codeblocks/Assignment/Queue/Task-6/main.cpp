#include <iostream>
#include "QueType.cpp"

using namespace std;

void Reverse(QueType<int> &q)
{
    if(q.IsEmpty()) return;

    int item;
    q.Dequeue(item);
    Reverse(q);
    q.Enqueue(item);
}


int main()
{
    int n;
    cout << "Enter the number of the elements: ";
    cin >> n;

    QueType<int> q1;

        int item;
        cout << "Enter elements: ";
        for(int i = 0; i < n; i++){
            cin >> item;
            q1.Enqueue(item);
        }

        Reverse(q1);

        while(!q1.IsEmpty()){
            q1.Dequeue(item);
            cout << item << " ";
        }
        cout << endl;
    return 0;
}
