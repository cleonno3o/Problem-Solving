#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
struct Info
{
    int x;
    int y;
    int dist;
    Info(int _x, int _y, int _dist)
    {
        x = _x;
        y = _y;
        dist = _dist;
    }
};

int main()
{
    vector<vector<int>> miro(8, vector<int>(8));
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            cin >> miro[i][j];
        }
    }
    int dist = 2147000000;
    queue<Info> q;
    q.push(Info(1, 1, 0));
    while (!q.empty())
    {
        Info top_info = q.front();
        if (top_info.x == 7 && top_info.y == 7)
        {
            if (top_info.dist < dist)
                dist = top_info.dist;
        }
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int x_next = top_info.x + dx[i];
            int y_next = top_info.y + dy[i];
            if (x_next <= 7 && x_next >= 0 && y_next <= 7 && y_next >= 0)
            {
                if (miro[x_next][y_next] == 0)
                    q.push(Info(x_next, y_next, top_info.dist + 1));
                    miro[x_next][y_next] = 1;
            }
        }
    }
    if (dist == 2147000000)
        cout << -1;
    else
        cout << dist;
    return 0;
}