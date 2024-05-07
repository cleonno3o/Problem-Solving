#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    int k;
    cin >> n >> k;
    int sum = 0;
    int arr[100000];
    int pos = 0;
    int max_sum = -100 * 100000;
    for (int i = 0; i < n; i++)
    {
        if (pos == k)
            pos = 0;
        if (i > k - 1)
        {
            sum -= arr[pos];
        }
        cin >> arr[pos];
        sum += arr[pos];
        if (i >= k - 1 && sum > max_sum)
            max_sum = sum;
        pos++;
    }
    cout << max_sum << '\n';
    return 0;
}