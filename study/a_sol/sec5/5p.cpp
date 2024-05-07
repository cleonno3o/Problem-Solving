#include <iostream>
using namespace std;

int arr[1001];
int cnt[1001];
int main()
{
    ios_base::sync_with_stdio(false);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        cnt[i] = 1;
    }
    for (int i = 2; i <= n; i++)
    {
        int max_val = 0;
        for (int j = 1; j < i; j++)
        {
            if (arr[i] > arr[j] && cnt[j] > max_val)
                max_val = cnt[j];
        }
        cnt[i] = max_val + 1;
    }
    for (int i = 1; i <= n; i++)
        cout << cnt[i] << ' ';
    return 0;
}