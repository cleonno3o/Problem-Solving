#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> num(n + 1);
    vector<int> dy(n + 1);
    for (int i = 1; i <= n; i++)
        cin >> num[i];
    dy[1] = 1;
    int res = 0;
    for (int i = 2; i <= n; i++)
    {
        int max_cnt = 0;
        for (int j = 1; j < i; j++)
        {
            if (num[i] > num[j] && dy[j] > max_cnt)
            {
                max_cnt = dy[j];
            }
        }
        dy[i] = max_cnt + 1;
        if (dy[i] > res)
            res = dy[i];
    }
    cout << res;
    return 0;
}