#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, m;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int p1 = 0;
    int p2 = 0;
    vector<int> c;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    while (1)
    {
        if (p1 == n || p2 == m)
            break;
        if (a[p1] > b[p2])
            p2++;
        else if(a[p1] < b[p2])
            p1++;
        else
        {
            c.push_back(a[p1]);
            p1++;
            p2++;

        }
    }
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << ' ';
    }
    return 0;
}