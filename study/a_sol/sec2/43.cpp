#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);

    int n, m;
    cin >> n >> m;
    vector<int> times(n);
    int sum = 0;
    int max = 1;
    for (int i = 0; i < n; i++)
    {
        cin >> times[i];
        sum += times[i];
        if (times[i] > max)
            max = times[i];
    }
    int l_th = max;
    int r_th = sum;
    int mid_th;
    int temp;
    bool run = true;
    int cnt = 0;
    int res;
    while (run)
    {
        mid_th = (l_th + r_th) / 2;
        temp = 0;
        cnt = 1;
        for (int i = 0; i < n; i++)
        {
            if (temp + times[i] > mid_th)
            {
                cnt++;
                temp = times[i];
            }
            else
                temp += times[i];
        }
        if (l_th >= r_th)
            run = false;
        else if(cnt <= m)
        {
            res = mid_th;
            r_th = mid_th;
        }
        else if(cnt > m)
            l_th = mid_th + 1;
    }
    cout << mid_th << '\n';
    return 0;
}