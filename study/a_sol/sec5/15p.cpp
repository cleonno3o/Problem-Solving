#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int a, b;
    vector<int> tree[100];
    int indeg[100] = {0};
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        tree[a].push_back(b);
        indeg[b]++;
    }
    queue<int> q;
    while (1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (indeg[i] == 0)
            {
                q.push(i);
                indeg[i] = -1;
            }
        }
        if (q.empty())
            break;
        else
            while(!q.empty())
            {
                cout << q.front() << ' ';
                for (int j = 0; j < tree[q.front()].size(); j++)
                {
                    indeg[tree[q.front()][j]]--;
                }
                q.pop();
            }
    }
    return 0;
}