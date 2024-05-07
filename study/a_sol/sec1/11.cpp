#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int count = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     if (i < 10)
    //         count += 1;
    //     else if (i < 100)
    //         count += 2;
    //     else if (i < 1000)
    //         count += 3;
    //     else if (i < 10000)
    //         count += 4;
    //     else
    //         count += 5;
    // }
    if (n < 10)
        count = n;
    else if (n < 100)
        count = (10 - 1) + 2 * (n - 9);
    else if (n < 1000)
        count = (10 - 1) + 2 * (100 - 10) + 3 * (n - 99);
    else if (n < 10000)
        count = (10 - 1) + 2 * (100 - 10) + 3 * (1000 - 100) + 4 * (n - 999);
    else if (n < 100000)
        count = (10 - 1) + 2 * (100 - 10) + 3 * (1000 - 100) + 4 * (10000 - 1000) + 5 * (n - 9999);
    cout << count;
    return 0;
}