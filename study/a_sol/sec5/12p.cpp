#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int score, time;
    vector<int> dp(m + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> score >> time;
        for (int j = m; j >= time; j--)
        {
            dp[j] = max(dp[j], dp[j - time] + score);
        }
    }
    cout << dp[m];
    return 0;
}