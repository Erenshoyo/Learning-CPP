#include <iostream>
#include "quetype.cpp"

using namespace std;

struct state
{
    int val, quantity;
    state(int v = 0, int q = 0)
    {
        val = v;
        quantity = q;
    }
};

int main()
{
    int n, f;

    cin >> n;

    int coins[n];

    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }

    cin >> f;

    bool visited[f + 1] = {false};

    QueType<state> q;

    q.Enqueue(state(0, 0));
    visited[0] = true;

    while (!q.IsEmpty())
    {
        state current;

        q.Dequeue(current);

        if(current.val == f){
            cout << current.quantity << endl;
            return 0;
        }

        for(int i = 0; i < n; i++){
            int next = current.val + coins[i];

            if(next <= f && !visited[next]){
                visited[next] = true;
                q.Enqueue(state(next, current.quantity+1));
            }
        }
    }

    return 0;
}