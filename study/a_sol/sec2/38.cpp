#include <iostream>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    int n;
    cin >> n;
    int inverse[100];
    int arr[100] = {0};
    for (int i = 0; i < n; i++)
        cin >> inverse[i];
    int cnt;
    int pos;
    int curr_num;
    for (int i = 1; i <= n; i++)
    {
        curr_num = n - i + 1;
        if (inverse[n - i] == 0)
        {
            for (int j = n - 1; j > 0;j--)
                arr[j] = arr[j - 1];
            pos = 0;
        }
        else
        {
            cnt = 0;
            for (int j = 0; j < n; j++)
            {
                if (cnt == inverse[n - i])
                {
                    pos = j;
                    break;
                }
                if (arr[j] > curr_num)
                    cnt++;
            }
            for (int j = n - 1; j > pos; j--)
            {
                arr[j] = arr[j - 1];
            }
        }
        arr[pos] = curr_num;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << ' ';
    }
    return 0;
}