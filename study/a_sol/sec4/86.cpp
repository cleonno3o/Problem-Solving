#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int n, m;
int min_dist = 2147000000;
vector<pair<int, int>> home;
vector<pair<int, int>> pizza;
vector<pair<int, int>> selected(600);
void dfs(int start, int level)
{
    if (level == m)
    {
        int curr_dist = 0;
        for (int i = 0; i < home.size(); i++)
        {
            int temp_min = 2147000000;
            int temp;
            for (int j = 0; j < m; j++)
            {
                temp = abs(home[i].first - selected[j].first) + abs(home[i].second - selected[j].second);
                if (temp < temp_min)
                    temp_min = temp;
            }
            curr_dist += temp_min;
        }
        if (curr_dist < min_dist)
            min_dist = curr_dist;
        return;
    }
    else
    {
        for (int i = start; i < pizza.size(); i++)
        {
            selected[level] = pizza[i];
            dfs(i + 1, level + 1);
        }
    }
}
int main()
{
    cin >> n >> m;
    int city[51][51];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> city[i][j];
            if (city[i][j] == 1)
            {
                home.push_back({i, j});
            }
            else if (city[i][j] == 2)
            {
                pizza.push_back({i, j});
            }
        }
    }
    dfs(0,0);
    cout << min_dist;
    return 0;
}