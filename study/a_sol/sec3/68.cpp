#include <iostream>
#include <vector>
using namespace std;
int n, m;
// int cnt = 0;
vector<pair<int, int>> graph[21];
int visit[21];
int min_cost = 2147000000;
int temp_cost = 0;
void dfs(int start)
{
    if (start == n)
    {
        if (temp_cost < min_cost)
            min_cost = temp_cost;
        return;
    }
    else
    {
        for (int i = 0; i < graph[start].size(); i++)
        {
            if (visit[graph[start][i].first] == 0)
            {
                visit[graph[start][i].first] = 1;
                temp_cost += graph[start][i].second;
                dfs(graph[start][i].first);
                visit[graph[start][i].first] = 0;
                temp_cost -= graph[start][i].second;
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    int a, b, c;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
    }
    dfs(1);
    cout << min_cost;
    return 0;
}