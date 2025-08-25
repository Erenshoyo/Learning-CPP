#include <iostream>
#include "StackType.cpp"

using namespace std;

int main()
{
    string parenthesis;
    cin >> parenthesis;

    StackType<char> ch;

    int current = 0;
    int maxDepth = 0;

    for(char c : parenthesis)
    {
        if (c == '(')
        {
           ch.Push(c);
           current++;
           if( current > maxDepth) {
            maxDepth = current;
           }
        } else if( c == ')'){
            ch.Pop();
            current--;
        }
    }

    cout << maxDepth << endl;
    return 0;
}
