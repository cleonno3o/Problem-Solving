#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct Tomato
{
    int x;
    int y;
    int day;
    Tomato (int mx, int my, int mday)
    {
        x = mx;
        y = my;
        day = mday;
    }
};

int n,m;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int main()
{
    cin >> m >> n;
    vector<vector<int>> box(n + 1, vector<int>(m + 1));
    queue<Tomato> q;
    int cnt_tomato = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> box[i][j];
            if (box[i][j] == 1)
                q.push(Tomato(i, j, 0));
            else if (box[i][j] == 0)
                cnt_tomato++;
        }
    }
    int today = 0;
    while (!q.empty())
    {
        Tomato curr_tomato = q.front();
        today = curr_tomato.day;
        q.pop();
        for (int i = 0; i < 4; i++)
        {
            int x_next = curr_tomato.x + dx[i];
            int y_next = curr_tomato.y + dy[i];
            int day_next = curr_tomato.day + 1;
            if (x_next <= n && x_next >= 1 && y_next <= m && y_next >= 1)
            {
                if (box[x_next][y_next] == 0)
                {
                    box[x_next][y_next] = 1;
                    q.push(Tomato(x_next, y_next, day_next));
                    cnt_tomato--;
                }
            }
        }
    }
    if (cnt_tomato != 0)
        cout << -1;
    else
        cout << today;
    return 0;
}