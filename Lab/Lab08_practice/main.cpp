#include <iostream>
#include "stacktype.cpp"

using namespace std;

int main()
{
    StackType<int> s;
    StackType<int> t;

    cout << (s.IsEmpty() ? "Stack is Empty" : "Stack is not Empty") << endl;

    s.Push(5);
    s.Push(4);
    s.Push(7);
    s.Push(2);

    cout << (s.IsEmpty() ? "Stack is Empty" : "Stack is not Empty") << endl;

    cout << (s.IsFull() ? "Stack is Full" : "Stack is not Full") << endl;

    while (!s.IsEmpty())
    {
        t.Push(s.Top());

        s.Pop();
    }

    while (!t.IsEmpty())
    {
        cout << t.Top() << " ";
        s.Push(t.Top());
        t.Pop();
    }

    cout << endl;

    s.Push(3);

    while (!s.IsEmpty())
    {
        t.Push(s.Top());

        s.Pop();
    }

    while (!t.IsEmpty())
    {
        cout << t.Top() << " ";
        s.Push(t.Top());
        t.Pop();
    }
    
    cout << endl;
    cout << (s.IsFull() ? "Stack is Full" : "Stack is not Full") << endl;

    for(int i = 0; i < 3; i++){
        s.Pop();
    }

    cout << s.Top() <<endl;
}