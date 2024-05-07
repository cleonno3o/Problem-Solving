#include <iostream>

using namespace std;
int n, m;
// int cnt = 0;
int graph[21][21];
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
        for (int i = 1; i <= n; i++)
        {
            if (visit[i] == 0 && graph[start][i] != 0)
            {
                visit[i] = 1;
                temp_cost += graph[start][i];
                dfs(i);
                visit[i] = 0;
                temp_cost -= graph[start][i];
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
        graph[a][b] = c;
    }
    dfs(1);
    cout << min_cost;
    return 0;
}