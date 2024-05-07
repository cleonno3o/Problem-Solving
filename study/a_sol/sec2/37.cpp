#include <iostream>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);

    int s, n;
    cin >> s >> n;
    int arr[11] = {0};
    int input;
    int cnt = 1;
    int j;
    int k;
    cin >> arr[0];
    for (int i = 1; i < n; i++)
    {
        cin >> input;
        for (j = 0; j < cnt; j++)
        {
            if (input == arr[j])
                break;
        }
        if (j == cnt)
            j = cnt - 1;
        for (k = j - 1; k >= 0; k--)
        {
            if (k < cnt -1)
                arr[k + 1] = arr[k];
        }
        arr[0] = input;
        if (cnt < s)
            cnt++;
    }
    for (int i = 0; i < cnt; i++)
        cout << arr[i] << ' ';
    return 0;
}