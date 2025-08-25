#include <iostream>
#include <string>
#include "quetype.cpp"
using namespace std;

int main()
{
    // 1. Create a queue of integers of size 5
    QueType<int> q(5);

    // 2. Print if empty
    if (q.IsEmpty())
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;

    // 3. Enqueue 5,7,4,2
    q.Enqueue(5);
    q.Enqueue(7);
    q.Enqueue(4);
    q.Enqueue(2);

    // 4. Print if empty
    if (q.IsEmpty())
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;

    // 5. Print if full
    if (q.IsFull())
        cout << "Queue is Full" << endl;
    else
        cout << "Queue is not Full" << endl;

    // 6. Enqueue 6
    q.Enqueue(6);

    // 7. Print queue safely
    {
        int item;
        QueType<int> backup(5);
        while (!q.IsEmpty())
        {
            q.Dequeue(item);
            cout << item << " ";
            backup.Enqueue(item);
        }
        cout << endl;
        // Restore
        while (!backup.IsEmpty())
        {
            backup.Dequeue(item);
            q.Enqueue(item);
        }
    }

    // 8. Print if full
    if (q.IsFull())
        cout << "Queue is Full" << endl;
    else
        cout << "Queue is not Full" << endl;

    // 9. Try Enqueue 8 → Overflow
    try
    {
        q.Enqueue(8);
    }
    catch (FullQueue)
    {
        cout << "Queue Overflow" << endl;
    }

    // 10. Dequeue 2 items
    int item;
    q.Dequeue(item);
    q.Dequeue(item);

    // 11. Print remaining safely
    {
        QueType<int> backup(5);
        while (!q.IsEmpty())
        {
            q.Dequeue(item);
            cout << item << " ";
            backup.Enqueue(item);
        }
        cout << endl;
        // Restore
        while (!backup.IsEmpty())
        {
            backup.Dequeue(item);
            q.Enqueue(item);
        }
    }

    // 12. Dequeue 3 items
    try
    {
        q.Dequeue(item);
        q.Dequeue(item);
        q.Dequeue(item);
    }
    catch (EmptyQueue)
    {
        cout << "Queue Underflow" << endl;
    }

    // 13. Check if empty
    if (q.IsEmpty())
        cout << "Queue is Empty" << endl;
    else
        cout << "Queue is not Empty" << endl;

    // 14. Try to Dequeue another → Underflow
    try
    {
        q.Dequeue(item);
    }
    catch (EmptyQueue)
    {
        cout << "Queue Underflow" << endl;
    }

    // 15. Binary number generator
    int n;
    cout << "Enter n for binary generation: ";
    cin >> n;

    QueType<string> binQ;
    binQ.Enqueue("1");

    for (int i = 1; i <= n; i++)
    {
        string curr;
        binQ.Dequeue(curr);
        cout << curr << endl;

        binQ.Enqueue(curr + "0");
        binQ.Enqueue(curr + "1");
    }

    return 0;
}
