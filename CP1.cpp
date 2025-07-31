#include<iostream>

using namespace std;

int main(){
    string a, b, c;
    int n;
    cin >> n;

    if(n >= 1 && n <= 100){
        for(int i = 0; i < n; i++){
            cin >> a >> b >> c;

            cout << a[0] << b[0] << c[0] <<endl;        
        }
    }

    return 0;
}