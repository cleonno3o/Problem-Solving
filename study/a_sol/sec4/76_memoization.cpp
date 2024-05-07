#include <iostream>
using namespace std;

int dy[300][300];
int dfs(int n, int r)
{
    if (dy[n][r] != 0)
        return dy[n][r];
    if (r == 0 || n == r)
        return 1;
    else
        return dy[n][r] = dfs(n - 1, r - 1) + dfs(n - 1, r);     
}

int main() 
{
    int n, r;
    cin >> n >> r;
    cout << dfs(n, r);
    return 0; 
}