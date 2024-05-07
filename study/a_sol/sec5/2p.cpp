#include <iostream>
using namespace std;
int dy[50];
int dynamic(int n)
{
    if (dy[n] > 0)
        return dy[n];
    if (n == 1)
        return dy[n] = 1;
    else if (n == 2)
        return dy[n] = 2;
    else
    {
        dy[n] = dynamic(n - 1) + dynamic(n - 2);
        return dy[n];
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    cout << dynamic(n);
    return 0;
}