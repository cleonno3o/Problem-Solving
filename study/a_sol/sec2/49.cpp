#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // freopen("in2.txt", "rt", stdin);
    int n;
    cin >> n;
    int arr[10][10];
    int front[10];
    int side[10];
    for (int i = 0; i < n; i++)
    {
        cin >> front[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> side[i];
    }
    int max;
    int res = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        for (int j = 0; j < n; j++)
        {
            max = front[j];
            if (side[i] < max)
                max = side[i];
            res += max;
        }
    }
    cout << res;
    return 0;
}