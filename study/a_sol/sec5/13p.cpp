#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int inf = 500;
    vector<vector<int>> graph(n + 1, vector<int>(n + 1, inf));
    int a, b, c;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;
        graph[a][b] = c;
    }
    for (int i = 1; i <= n; i++)
    {
        graph[i][i] = 0;
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
                graph[j][k] = min(graph[j][k], graph[j][i] + graph[i][k]);
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (graph[i][j] == 500)
                cout << "M ";
            else
                cout << graph[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}