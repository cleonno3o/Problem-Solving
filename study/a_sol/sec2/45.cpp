#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    vector<int> prince(n + 1);
    int cnt = 1;
    int pos = k;
    prince[pos] = -1;
    while (cnt < n - 1)
    {
        for (int i = 1; i <= k; i++)
        {
            if (pos + 1 > n)
                pos = 0;
            if (prince[pos + 1] == -1)
                i--;
            pos += 1;
        }
        prince[pos] = -1;
        cnt++;
    }
    cout << find(prince.begin() + 1, prince.end(), 0) - prince.begin();
    return 0;
}