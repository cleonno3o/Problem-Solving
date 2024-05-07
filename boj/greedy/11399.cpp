#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n; i++)
        cin >> num[i];
    sort(num.begin(), num.end());
    int res = 0;
    for (int i = 0; i < n; i++)
        res += num[i] * (n - i);
    cout << res;
    return 0;
}