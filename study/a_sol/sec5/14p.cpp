#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int from, to;
    int inf = 5000;
    vector<vector<int>> relation(n + 1, vector<int>(n + 1, inf));
    vector<int> res(n + 1);
    while (1)
    {
        cin >> from >> to;
        if (from == -1 && to == -1)
            break;
        else
        {
            relation[from][to] = 1;
            relation[to][from] = 1;
        }
    }
    for (int i = 1; i <= n; i++)
        relation[i][i] = 0;
        
    for (int mid = 1; mid <= n; mid++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                relation[i][j] = min(relation[i][j], relation[i][mid] + relation[mid][j]);
            }
        }
    }
    
    int min_score = 2147000000;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        int temp_score = 0;
        for (int j = 1; j <= n; j++)
        {
            res[i] = max(res[i], relation[i][j]);
        }
        min_score = min(min_score, res[i]);
    }
    string cand = "";
    for (int i = 1; i <= n; i++)
    {
        if (res[i] == min_score)
        {
            cand += to_string(i) + " ";
            cnt++;
        }
    }
    cout << min_score << ' ' << cnt << '\n'
         << cand;
    return 0;
}