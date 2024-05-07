#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> coin(n);
    for (int i = 0; i < n; i++)
        cin >> coin[i];
    int m;
    cin >> m;
    vector<int> dp(m + 1, 0);
    for (int i = 0; i < n; i++)
    {
        for (int j = coin[i]; j <= m; j++)
        {
            dp[j] = min(dp[j], dp[j - coin[i]] + 1);
        }
    }
    cout << dp[m];
    return 0;
}