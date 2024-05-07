#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> coins(n);
    for (int i = 0; i < n; i++)
        cin >> coins[i];
    
    int a;
    int cnt = 0;
    int i = 0;
    while (1)
    {
        if (k == 0)
            break;
        a = k - coins[n - 1 - i];
        if (a < 0)
            i++;
        else
        {
            k = a;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}