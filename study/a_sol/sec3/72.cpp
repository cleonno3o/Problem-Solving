#include <iostream>
#include <queue>
using namespace std;
int n, k;
queue<int> q;
int main()
{
    cin >> n >> k;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        q.push(i);
    }
    int last;
    while(!q.empty())
    {
        cnt += 1;
        if (cnt % k == 0)
        {
            last = q.front();
            q.pop();
            cnt = 0;
        }
        else
        {
            q.push(q.front());
            q.pop();
        }
    }
    cout << last;
    return 0;
}