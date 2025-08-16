#include <iostream>
#include <string>
#include "quetype.cpp"

using namespace std;

int main()
{
    QueType<int> q(5);
    QueType<int> q1(5);
    int item;

    cout << (q.IsEmpty() ? "Queue is Empty" : "Queue is not Empty") << endl;

    q.Enqueue(5);
    q.Enqueue(7);
    q.Enqueue(4);
    q.Enqueue(2);

    cout << (q.IsEmpty() ? "Queue is Empty" : "Queue is not Empty") << endl;

    cout << (q.IsFull() ? "Queue is Full" : "Queue is not Full") << endl;

    q.Enqueue(6);

    while (!q.IsEmpty())
    {
        q.Dequeue(item);
        cout << item << " ";
        q1.Enqueue(item);
    }

    cout << endl;

    while (!q1.IsEmpty())
    {
        q1.Dequeue(item);
        q.Enqueue(item);
    }

    cout << (q.IsFull() ? "Queue is Full" : "Queue is not Full") << endl;

    try
    {
        q.Enqueue(8);
    }
    catch (FullQueue)
    {
        cout << "Queue Overflow" << endl;
    }

    q.Dequeue(item);
    q.Dequeue(item);

    while (!q.IsEmpty())
    {
        q.Dequeue(item);
        cout << item << " ";
        q1.Enqueue(item);
    }

    cout << endl;

    while (!q1.IsEmpty())
    {
        q1.Dequeue(item);
        q.Enqueue(item);
    }

    try
    {
        q.Dequeue(item);
        q.Dequeue(item);
        q.Dequeue(item);
    }
    catch (EmptyQueue)
    {
        cout << "Queue Underflow." << endl;
    }

    cout << (q.IsEmpty() ? "Queue is Empty" : "Queue is not Empty") << endl;

    try
    {
        q.Dequeue(item);
    }
    catch (EmptyQueue)
    {
        cout << "Queue Underflow." << endl;
    }

    int n;
    string curr;
    cout << "Enter n for binary generation: ";
    cin >> n;

    QueType<string> binary;
    binary.Enqueue("1");

    for( int i =  1; i <= n; i++){
        binary.Dequeue(curr);
        cout << curr << endl;

        binary.Enqueue(curr + "0");
        binary.Enqueue(curr + "1");
    }

    return 0;
}