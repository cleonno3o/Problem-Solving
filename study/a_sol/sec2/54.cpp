#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string str;
    cin >> str;
    stack<char> s;
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
            s.push('(');
        else if (str[i] == ')' && s.empty())
        {
            cout << "NO";
            return 0;
        }
        else
            s.pop();
    }
    if (s.empty())
        cout << "YES";
    else
        cout << "NO";
    return 0;
}