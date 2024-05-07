#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // freopen("in5.txt", "rt", stdin);
    int n, c;
    cin >> n >> c;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr.begin(), arr.end());
    int l = 1;
    int r = arr.back(); // 10 5 
    int mid;
    int pos;
    int cnt;
    int res;
    while (l <= r)
    {
        mid = (l + r) / 2;
        pos = 0;
        cnt = 1;
        for (int i = 1; i < n; i++)
        {
            if (arr[i] - arr[pos] >= mid)
            {
                cnt++;
                pos = i;
            }
        }
        if (cnt < c)
        {
            r = mid -1;
        }
        else if (cnt >= c)
        {
            res = mid;
            l = mid + 1;
        }
    }
    cout << res;
    return 0;
}