#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // freopen("in1.txt", "rt", stdin);
    int arr[9];
    int sum;
    int mean;
    int temp;
    int res;
    int curr_diff;
    int res_diff;
    for (int i = 0; i < 9; i++)
    {
        sum = 0;
        for (int j = 0; j < 9; j++)
        {
            cin >> arr[j];
            sum += arr[j];
        }
        temp = sum % 9;
        if (temp >= 5)
            mean = sum / 9 + 1;
        else
            mean = sum / 9;
        res = arr[0];
        for (int j = 0; j < 9; j++)
        {
            curr_diff = arr[j] - mean;
            if (curr_diff < 0)
                curr_diff = -curr_diff;
            res_diff = res - mean;
            if (res_diff < 0)
                res_diff = -res_diff;
            if (curr_diff < res_diff)
                res = arr[j];
            else if (curr_diff == res_diff && arr[j] > res)
                res = arr[j];
        }
        cout << mean << ' ' << res << '\n';
    }
    return 0;
}