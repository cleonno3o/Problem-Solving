#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int n, m, v;
vector<int> graph[1001];
int check_dfs[1001];
int check_bfs[1001];

void dfs(int start)
{
    check_dfs[start] = 1;
    cout << start << ' ';
    for (int i = 0; i < graph[start].size(); i++)
    {
        if (check_dfs[graph[start][i]] == 0)
            dfs(graph[start][i]);
    }
}

void bfs(int start)
{
    check_bfs[start] = 1;
    queue<int> q;
    q.push(start);
    while (!q.empty())
    {
        int go = q.front();
        cout << go << ' ';
        q.pop();
        for (int i = 0; i < graph[go].size(); i++)
        {
            if (check_bfs[graph[go][i]] == 0)
            {
                q.push(graph[go][i]);
                check_bfs[graph[go][i]] = 1;
            }
        }
    }
}

int main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> m >> v;
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for (int i = 0; i < 1000; i++)
        sort(graph[i].begin(), graph[i].end());
    dfs(v);
    cout << '\n';
    bfs(v);
    return 0;
}