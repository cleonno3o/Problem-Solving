#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int n, bag;
    cin >> n >> bag;
    int a, b;
    vector<int> dp(bag + 1);
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        for (int j = a; j <= bag; j++)
        {
            dp[j] = max(dp[j], dp[j - a] + b);
        }
    }
    cout << dp[bag];
    return 0;
}