#include<iostream>
#include "QueType.cpp"

using namespace std;

struct State{
    int value;
    int count;

    State(int v = 0, int c = 0){
        value = v;
        count = c;
    }
};

int main(){
    int n, final;

    cin >> n;

    int coin[n];
    for(int i = 0; i < n; i++){
        cin >> coin[i];
    }

    cin >> final;

    bool visited[final + 1] = {false};

    QueType<State> q;
    q.Enqueue(State(0, 0));
    visited[0] = true;

    while(!q.IsEmpty()){
        State current;
        q.Dequeue(current);

        if(current.value == final){
            cout << "Possible. Min No. of coins = " << current.count << endl;
            return 0;
        }

        for(int i = 0; i < n; i++){
            int next = current.value + coin[i];
            if(next <= final && !visited[next]){
                visited[next] = true;
                q.Enqueue(State(next, current.count + 1));
            }
        }
    }

    cout << "Not Possible" << endl;
    return 0;
}
