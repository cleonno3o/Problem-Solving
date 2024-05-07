#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[100] = {0};
    int curr;
    int prev;
    int diff;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
            cin >> curr;
        else
        {
            prev = curr;
            cin >> curr;
            diff = prev - curr;
            if (diff < 0)
                diff = -diff;
            if (diff < n && diff > 0)
                arr[diff] = 1;
        }
    }
    bool flag = true;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != 1)
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << "YES" << '\n';
    else
        cout << "NO" << '\n';
    return 0;
}