#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    stack<int> s;
    int temp;
    int cnt = 1;
    string res;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        s.push(temp);
        res += "P";
        if (!s.empty() && s.top() == cnt)
        {
            while (!s.empty() && s.top() == cnt)
            {
                s.pop();
                res += "O";
                cnt++;
            }
        }
    }
    if (!s.empty())
        cout << "impossible";
    else
        cout << res;
    return 0;
}