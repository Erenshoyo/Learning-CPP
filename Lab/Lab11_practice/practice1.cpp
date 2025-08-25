#include <iostream>
#include "quetype.cpp"

using namespace std;

struct state
{
    int value, count;
    state(int v = 0, int c = 0)
    {
        value = v;
        count = c;
    }
};

int main()
{
    int n, final;
    cin >> n;
    int coin[n];
    for (int i = 0; i < n; i++)
    {
        cin >> coin[i];
    }
    cin >> final;

    bool visited[final + 1] = {false};
    QueType<state> q;
    q.Enqueue(state(0, 0));
    visited[0] = true;

    while (!q.IsEmpty())
    {
        state current;
        q.Dequeue(current);
        if (current.value == final)
        {
            cout << current.count << endl;
            return 0;
        }
        for (int i = 0; i < n; i++)
        {
            int next = current.value + coin[i];
            if (next <= final && !visited[next])
            {
                visited[next] = true;
                q.Enqueue(state(next, current.count + 1));
            }
        }
    }
    return 0;
}