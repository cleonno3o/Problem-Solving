#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int m;
    cin >> m;
    vector<int> b(m);
    for (int i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    int i = 0;
    int j = 0;
    int pos = 0;
    vector<int> c(n + m);
    while (1)
    {
        if (a[i] < b[j])
            c[pos++] = a[i++];
        else
            c[pos++] = b[j++];
        if (i == n)
        {
            for (j; j < m;j++)
            {
                c[pos++] = b[j];
            }
            break;
        }
        else if (j == m)
        {
            for (i; i < n; i++)
            {
                c[pos++] = a[i];
            }
            break;
        }
    }
    for (int i = 0; i < c.size(); i++)
    {
        cout << c[i] << ' ';
    }
    return 0;
}