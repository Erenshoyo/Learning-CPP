#include <iostream>

using namespace std;

int main() {
    int a, b;
    char operation;

    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    cout << "Enter an operation(+ ,- ,* , /): ";
    cin >> operation;
    
    switch (operation)
    {
    case '+':
        cout << a + b;
        break;
    
    case '-':
        cout << a - b;
        break;

    case '*':
        cout << a * b;
        break;

    case '/':
        cout << a / b;
        break;
    
    default:
        cout << "Invalid Operation";
    }

}