#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<vector<int> > dp(n + 1, vector<int>(k + 1));
    vector<pair<int, int> > coins(n);
    int w, v;
    for (int i = 1; i <= n; i++)
    {
        cin >> w >> v;
        for (int j = 1; j <= k; j++)
        if (j - w >= 0)
        {
            dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w] + v);
        }
        else
            dp[i][j] = dp[i - 1][j];
    }
    cout << dp[n][k];
    return 0;
}