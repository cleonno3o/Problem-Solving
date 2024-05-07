#include <iostream>
#include <algorithm>
using namespace std;

int arr[21][21];
int dy[21][21];
int td(int x, int y)
{
    // memo를 확인하는것이 최우선 조건이어야한다
    if (dy[x][y] != 0)
        return dy[x][y];
    if (x == 1 && y == 1)
        return dy[x][y] = arr[1][1];
    else if (x == 1)
        return dy[x][y] = td(x, y - 1) + arr[x][y];
    else if (y == 1)
        return dy[x][y] = td(x - 1, y) + arr[x][y];
    return dy[x][y] = min(td(x - 1, y), td(x, y - 1)) + arr[x][y];
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << td(n,n);

    return 0;
}