#include <iostream>
using namespace std;

int n, r;
int arr[16] = {0};
int ch[16];
int res[16];
int total;
void dfs(int cnt)
{
    if (cnt == r)
    {
        for (int i = 0; i < cnt; i++)
        {
            cout << res[i] << ' ';
        }
        cout << '\n';
        total++;
        return;
    }
    else
    {
        for (int j = 1; j <= n; j++)
        {
            if (ch[j] == 0)
            {
                ch[j] = 1;
                res[cnt] = arr[j];
                dfs(cnt + 1);
                ch[j] = 0;
            }
            // cnt++;
        }
    }
}
int main()
{
    cin >> n >> r;

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    dfs(0);
    cout << total;
    return 0;
}