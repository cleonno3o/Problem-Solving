#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[21][21] = {0};
    int dy[21][21] = {0};
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> arr[i][j];
    }
    dy[1][1] = arr[1][1];
    int a, b;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (dy[i - 1][j] == 0)
                dy[i][j] = dy[i][j - 1] + arr[i][j];
            else if (dy[i][j - 1] == 0)
                dy[i][j] = dy[i - 1][j] + arr[i][j];
            else
                dy[i][j] = min(dy[i - 1][j], dy[i][j - 1]) + arr[i][j];
        }
    }
    cout << dy[n][n];
    return 0;
}