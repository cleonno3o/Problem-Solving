#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int num;
    int pred;
    int res;
    for (int i = 0; i < n; i++)
    {
        cin >> num >> pred;
        res = (num + 1) * (num / 2);
        if (num % 2 == 1)
            res += (num + 1) / 2;
        if (res == pred)
            cout << "YES" << '\n';
        else
            cout << "NO" << '\n';
    }
    return 0;
}