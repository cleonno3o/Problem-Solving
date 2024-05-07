#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> gr(n + 1, vector<int>(n + 1, 500));
    while(1)
    {
        int a, b;
        cin >> a >> b;
        if (a == -1 && b == -1)
            break;
        gr[a][b] = 1;
        gr[b][a] = 1;
    }
    for (int i = 1; i <= n; i++)
    {
        gr[i][i] = 0;
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= n; k++)
            {
                gr[j][k] = min(gr[j][k], gr[j][i] + gr[i][k]);
            }
        }
    }
    int min = 20000;
    int cnt = 0;
    vector<int> ar;
    for (int i = 1; i <= n; i++)
    {
        int temp = 0;
        for (int j = 1; j <= n; j++)
        {
            temp = max(temp, gr[i][j]);
        }
        if (temp < min)
        {
            ar.clear();
            min = temp;
            ar.push_back(i);
            cnt = 1;
        }
        else if (temp == min)
        {
            cnt++;
            ar.push_back(i);
        }
    }
    cout << min << " " << cnt;
    for (auto& e: ar)
        cout << e << ' ';
    return 0;
}