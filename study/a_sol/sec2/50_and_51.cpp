#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int h, w;
    cin >> h >> w;
    vector<vector<int>> arr(h + 1, vector<int>(w + 1));
    vector<vector<int>> dx(h + 1, vector<int>(w + 1));

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= w; j++)
        {
            cin >> arr[i][j];
            dx[i][j] = dx[i - 1][j] + dx[i][j - 1] - dx[i - 1][j - 1] + arr[i][j];
        }
    }
    int n, m;
    cin >> n >> m;
    int max = -1;
    int temp;
    for (int i = n; i <= h; i++)
    {
        for (int j = m; j <= w; j++)
        {
            temp = dx[i][j] - dx[i - n][j] - dx[i][j - m] + dx[i - n][j - m];
            if (temp > max)
                max = temp;
        }
    }
    cout << max;
    return 0;
}