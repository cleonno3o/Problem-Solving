#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int arr[100];
    int max;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    max = arr[n - 1];
    for (int i = n - 1; i >= 0; i--)
    {
        if (arr[i] > max)
        {
            cnt++;
            max = arr[i];
        }
    }
    cout << cnt << '\n';
    return 0;
}