#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    int l = 0;
    int r = arr.size() - 1;
    int idx = 0;
    while (1)
    {
        idx = (l + r) / 2;
        if (arr[idx] == m)
            break;
        else if (arr[idx] > m)
        {
            r = idx;
        }
        else
        {
            l = idx;
        }
    }
    cout << idx + 1;
    return 0;
}