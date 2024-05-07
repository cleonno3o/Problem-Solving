#include <iostream>
using namespace std;
int arr[10][10];
int cnt = 0;
int visit[10][10];
int x_arr[] = {1, 0, -1, 0};
int y_arr[] = {0, 1, 0, -1};
void dfs(int x, int y)
{
    // cout << "my pos: " << x << " " << y << '\n';
    if (arr[x][y] == 1)
        return;
    if (x == 7 && y == 7)
    {
        cnt++;
        return;
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            if (x + x_arr[i] <= 7 && y + y_arr[i] <= 7 && x + x_arr[i] >= 1 && y + y_arr[i] >= 1)
            {
                if (visit[x + x_arr[i]][y + y_arr[i]] == 0)
                {
                    visit[x + x_arr[i]][y + y_arr[i]] = 1;
                    dfs(x + x_arr[i], y + y_arr[i]);
                    visit[x + x_arr[i]][y + y_arr[i]] = 0;
                }
            }
        }
    }
}
int main()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= 7; j++)
        {
            cin >> arr[i][j];
        }
    }
    visit[1][1] = 1;
    dfs(1, 1);
    cout << cnt;
    return 0;
}