#include <iostream>
using namespace std;
int arr[21][21] = {0};
int visit[21] = {0};
int cnt = 0;

void dfs(int n,int start)
{
    if (start == n)
    {
        cnt++;
        return;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            if (arr[start][i] == 1 && visit[i] == 0)
            {
                visit[i] = 1;
                dfs(n, i);
                visit[i] = 0;
            }
        }
    }
}
int main()
{
    int n, m;
    cin >> n >> m;
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        arr[a][b] = 1;
    }
    dfs(n,1);
    cout << cnt;
    return 0;
}