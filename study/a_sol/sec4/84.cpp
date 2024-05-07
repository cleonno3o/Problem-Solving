#include <iostream>
#include <vector>
using namespace std;

int n;
int max_val = 0;
int val = 0;
vector<pair<int,int>> tree(20);
int today = 1;
void dfs(int start)
{
    if (start == n + 1)
    {
        // if (val > max_val)
        //     max_val = val;
        return;
    }
    else
    {
        for (int i = start; i <= n; i++)
        {
            int time = tree[i].first;
            int money = tree[i].second;
            if (i + time > n + 1)
                continue;
            today = i + time;
            val += money;
            if (val > max_val)
                max_val = val;
            dfs(today);
            today = start;
            val -= money;
        }
    }
}
int main()
{
    cin >> n;
    int a, b;
    for (int i = 1; i <= n; i++)
    {
        cin >> a >> b;
        tree[i] = make_pair(a, b);
    }
    dfs(1);
    cout << max_val;
    return 0;
}