#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int pos2 = 1;
    int pos3 = 1;
    int pos5 = 1;
    vector<int> ugly(n + 1);
    ugly[1] = 1;
    int cnt = 1;
    int my_min;
    bool flag2;
    bool flag3;
    bool flag5;
    while (cnt < n)
    {
        flag2 = false;
        flag3 = false;
        flag5 = false;
        
        if (ugly[pos2] * 2 <= ugly[pos3] * 3 && ugly[pos2] * 2 <= ugly[pos5] * 5)
            flag2 = true;
        if (ugly[pos3] * 3 <= ugly[pos2] * 2 && ugly[pos3] * 3 <= ugly[pos5] * 5)
            flag3 = true;
        if (ugly[pos5] * 5 <= ugly[pos2] * 2 && ugly[pos5] * 5 <= ugly[pos3] * 3)
            flag5 = true;
        cnt++;
        if (flag2)
            ugly[cnt] = ugly[pos2++] * 2;
        if (flag3)
            ugly[cnt] = ugly[pos3++] * 3;
        if (flag5)
            ugly[cnt] = ugly[pos5++] * 5;;
        }
    cout << ugly[cnt];
    return 0;
}