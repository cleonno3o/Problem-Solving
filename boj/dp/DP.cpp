#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int n, m;
    pair<int, int> offset[] = {{-1, -1}, {0, -1}, {1, -1}};
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        int mat[21][21] = {0};
        int res[21][21] = {0};
        for (int j = 1; j <= n; j++)
        {
            for (int k = 1; k <= m; k++)
                cin >> mat[j][k];
        }

        for (int k = 1; k <= m; k++)
        {
            for (int j = 1; j <= n; j++)
            {
                int maxval = 0;
                for (int l = 0; l < 3; l++)
                {
                    int prevy = offset[l].first + j;
                    int prevx = offset[l].second + k;

                    if (prevy <= n && prevy >= 0 && prevx <= m && prevx >= 0)
                    {
                        // cout << mat[j][k] + res[prevy][prevx] << '\n';
                        if (mat[j][k] + res[prevy][prevx] > maxval)
                            maxval = mat[j][k] + res[prevy][prevx];
                    }
                }
                res[j][k] = maxval;
            }
        }
        int maxres = 0;
        for (int j = 1; j <= n; j++)
        {
            if (res[j][m] > maxres)
                maxres = res[j][m];
        }
        cout << maxres << '\n';
    }
    return 0;
}