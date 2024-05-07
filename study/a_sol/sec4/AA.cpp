#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int dx[] = {-1, 0, 0, 1};
int dy[] = {0, -1, 1, 0};

struct Info
{
    int x, y, dist;
    Info(){}
    Info(int a, int b, int c)
    {
        x = a;
        y = b;
        dist = c;
    }
    bool operator< (const Info &b) const
    {
        if (dist != b.dist)
            return dist > b.dist;
        else if (x != b.x)
            return x > b.x;
        else if (y != b.y)
            return y > b.y;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> jungle(n + 1, vector<int>(n + 1));
    vector<vector<int>> visited(n + 1, vector<int>(n + 1));
    Info lion;
    int time = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> jungle[i][j];
            if (jungle[i][j] == 9)
                lion = Info(i, j, 0);
        }
    }
    priority_queue<Info> q;
    q.push(lion);
    jungle[lion.x][lion.y] = 0;
    int lion_level = 2;
    int ate = 0;
    visited[lion.x][lion.y] = 1;
    while (!q.empty())
    {
        Info temp = q.top();
        int x = temp.x;
        int y = temp.y;
        int dist = temp.dist;
        q.pop();
        if (jungle[x][y] < lion_level && jungle[x][y] > 0)
        {
            lion.x = x;
            lion.y = y;
            lion.dist = temp.dist;
            ate++;
            if (ate == lion_level)
            {
                lion_level++;
                ate = 0;
            }
            jungle[x][y] = 0;
            for (int i = 0; i <= n; i++)
            {
                for (int j = 0; j <= n; j++)
                {
                    visited[i][j] = 0;
                }
            }
            while (!q.empty())
            {
                q.pop();
            }
        }
        for (int i = 0; i < 4; i++)
        {
            int x_next = x + dx[i];
            int y_next = y + dy[i];
            int dist_next = dist + 1;
            if (x_next <= n && x_next >= 1 && y_next <= n && y_next >= 1)
            {
                if (visited[x_next][y_next] == 0 && jungle[x_next][y_next] <= lion_level)
                {
                    q.push(Info(x_next, y_next, dist_next));
                    visited[x_next][y_next] = 1;
                }
            }
        }
    }
    cout << lion.dist;
    return 0;
}