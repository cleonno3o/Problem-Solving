#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int dx[] = {1, 1, 0, -1, -1, -1, 0, 1};
int dy[] = {0, 1, 1, 1, 0, -1, -1, -1};
int main()
{
    int n;
    cin >> n;
    vector<vector<int>> world(n + 1, vector<int>(n + 1));
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> world[i][j];
    }
    int cnt = 0;
    queue<pair<int, int>> q;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (world[i][j] == 1)
            {
                cnt++;
                world[i][j] = -1;
                q.push({i, j});
                while (!q.empty())
                {
                    pair<int,int> pos = q.front();
                    q.pop();
                    int x = pos.first;
                    int y = pos.second;
                    for (int k = 0; k < 8; k++)
                    {
                        if (x + dx[k] >= 1 && x + dx[k] <= n && y + dy[k] >= 1 && y + dy[k] <= n)
                        {
                            if (world[x + dx[k]][y + dy[k]] == 1)
                            {
                                q.push({x + dx[k], y + dy[k]});
                                world[x + dx[k]][y + dy[k]] = -1;
                            }
                        }
                    }
                }
            }
        }
    }
    cout << cnt;
    return 0;
}