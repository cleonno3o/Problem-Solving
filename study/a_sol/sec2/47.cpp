#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    int n;
    cin >> n;
    vector<vector<int>> board(n + 2, vector<int>(n + 2, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n;j++)
        {
            cin >> board[i + 1][j + 1];
        }
    }
    int temp;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            temp = board[i][j];
            if (temp > board[i - 1][j] && temp > board[i][j - 1] && temp > board[i + 1][j] && temp > board[i][j + 1])
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}