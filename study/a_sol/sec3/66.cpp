#include <iostream>
#include <vector>
using namespace std;
int ch[30];
vector<int> map[30];
int n, m;
int cnt = 0;

void dfs(int start)
{
    if (start == n)
    {
        cnt++;
        return;
    }
    else
    {
        for (int i = 0; i < map[start].size(); i++)
        {
            if (ch[map[start][i]] == 0)
            {
                ch[map[start][i]] = 1;
                dfs(map[start][i]);
                ch[map[start][i]] = 0;
            }
        }
    }
}
int main()
{
    cin >> n >> m;
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        map[a].push_back(b);
    }
    ch[1] = 1;
    dfs(1);
    cout << cnt;
    return 0;
}