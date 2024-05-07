#include <iostream>
#include <queue>
using namespace std;
priority_queue<int> q;
int main()
{
    int input;
    while (1)
    {
        cin >> input;
        if (input == -1)
            break;
        else if (input == 0)
        {
            if (q.empty())
                cout << -1 << '\n';
            else
            {
                cout << -q.top() << '\n';
                q.pop();
            }
        }
        else
        {
            q.push(-input);
        }
    }
    return 0;
}