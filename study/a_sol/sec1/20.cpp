#include <iostream>
#include <array>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    array<int, 100> a;
    array<int, 100> b;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b[i])
            cout << 'D' << '\n';
        else if (a[i] - b[i] == 1)
            cout << 'A' << '\n';
        else if (a[i] - b[i] == 2)
            cout << 'B' << '\n';
        else if (a[i] - b[i] == -1)
            cout << 'B' << '\n';
        else if (a[i] - b[i] == -2)
            cout << 'A' << '\n';
    }
    return 0;
}