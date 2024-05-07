#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    int arr[21][21] = {0};
    int i, j, val;
    for (int k = 0; k < m; k++)
    {
        cin >> i >> j >> val;
        arr[i][j] = val;
    }
    for (int k = 1; k <= n; k++)
    {
        for (int l = 1; l <= n; l++)
            cout << arr[k][l] << '\t';
        cout << '\n';
    }
    return 0;
}