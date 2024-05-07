#include <iostream>
#include <vector>
using namespace std;

int table[21][21];
int ch[21];
int n;
int min_diff = 2147000000;
void dfs(int l, int s)
{
    if (min_diff == 0)
        return;
    if (l == n / 2)
    {
        vector<int> me, you;
        int power = 0;
        int enemy = 0;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (ch[i] == 1 && ch[j] == 1)
                    power += table[i][j];
                else if (ch[i] == 0 && ch[j] == 0)
                    enemy += table[i][j];
            }
        }
        if (abs(enemy - power) < min_diff)
            min_diff = abs(enemy - power);
        return;
    }
    else
    {
        for (int i = s; i <= n; i++)
        {
            if (ch[i] == 0)
            {
                ch[i] = 1;
                dfs(l + 1, i + 1);
                ch[i] = 0;
            }
        }
    }
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
            cin >> table[i][j];
    }
    dfs(0, 1);
    cout << min_diff;
    return 0;
}