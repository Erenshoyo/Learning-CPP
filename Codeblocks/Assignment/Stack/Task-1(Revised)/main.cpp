#include <iostream>
#include <string>
#include "StackType.cpp"

using namespace std;

bool processOperator(StackType <int> &s, char op)
{
    if(s.IsEmpty())
        return false;
    int b = s.Top();
    s.Pop();

    if(s.IsEmpty())
        return false;
    int a = s.Top();
    s.Pop();

    int res;

    switch(op)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        if(b == 0)
            return false;
        res = a / b;
        break;
    default:
        return false;
    }

    if (s.IsFull()) return false;
    s.Push(res);

    return true;
}

bool calculatePostfix(const string &exp, int &result)
{
    StackType<int> s;
    bool isValid = false;

    bool spaceIncluded = false;

    for(char  c: exp)
    {
        if(c == ' ')
        {
            spaceIncluded = true;
            break;
        }
    }
    for(size_t i = 0; i < exp.size() && !isValid; i++)
    {
        if (exp[i] == ' ')
            continue;
        if(!spaceIncluded)
        {
            char ch = exp[i];
            if(isdigit(ch))
            {
                if(s.IsFull())
                {
                    isValid = true;
                    break;
                }
                s.Push(ch - '0');
            }
            else if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
            {
                if(!processOperator(s, ch))
                {
                    isValid = true;
                    break;
                }
            }
            else
            {
                isValid = true;
                break;
            }
        }
        else
        {
            if(isdigit(exp[i]))
            {
                int num = 0;
                while(i < exp.size() && isdigit(exp[i]))
                {
                    num = num*10 + (exp[i] - '0');
                          i++;
                }
                i--;
                if(s.IsFull())
                {
                    isValid = true;
                    break;
                }
                s.Push(num);
            }
            else if(exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/')
            {
                if(!processOperator(s, exp[i]))
                {
                    isValid = true;
                    break;
                }
            }
            else
            {
                isValid = true;
                break;
            }
        }

    }

    if(isValid || s.IsEmpty())
        return false;
    result = s.Top();
    s.Pop();

    if(!s.IsEmpty())
        return false;

    return true;
}

int main()
{
    string e;
    getline(cin, e);

    int r;
    if(calculatePostfix(e, r))
    {
        cout << r << endl;
    }
    else
        cout << "Invalid expression.";

    return 0;
}
