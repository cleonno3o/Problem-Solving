#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> man(n);
    vector<int> dp(n, 1);
    for (int i = 0; i < n; i++)
        cin >> man[i];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (man[j] > man[i])
                dp[i] = max(dp[j] + 1, dp[i]);
        }
    }
    int maxlength = 0;
    for (int i = 0; i < n; i++)
    {
        if (dp[i] > maxlength)
            maxlength = dp[i];
    }
        cout << n - maxlength;
    return 0;
}