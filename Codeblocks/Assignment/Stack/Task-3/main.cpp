#include <iostream>
#include "StackType.cpp"
using namespace std;

int main()
{
    StackType<int> s1;
    StackType<int> s2;
    int n;
    cout << "Enter the number of values: ";
    cin >> n;

    cout << "Insert the values to be added to stack: ";
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;

        while(!s1.IsEmpty() && s1.Top() > x) {
            s2.Push(s1.Top());
            s1.Pop();
        }

        s1.Push(x);
        while (!s2.IsEmpty()) {
            s1.Push(s2.Top());
            s2.Pop();
        }

        StackType<int> s3 = s1;
        while(!s3.IsEmpty()) {
            cout << s3.Top() << " ";
            s3.Pop();
        }
        cout << endl;
    }
   return 0;
}
