#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> dduck(n);
    for (int i = 0; i < n; i++)
    {
        cin >> dduck[i];
    }
    int l = 0;
    int r = 1000000000;
    int mid;
    long long int sum;
    int res;
    while (l <= r)
    {
        mid = (l + r) / 2;
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            if (dduck[i] > mid)
                sum += dduck[i] - mid;
        }
        if (sum < m)
        {
            r = mid - 1;
        }
        else if (sum == m)
        {
            res = mid;
            break;
        }
        else if (sum >= m)
        {
            res = mid;
            l = mid + 1;
        }
    }
    cout << res;
    return 0;
}