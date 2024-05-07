#include <iostream>
using namespace std;

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    int n;
    cin >> n;
    int grp = 2;
    int cnt = 0;
    int sum = 1;
    int temp;
    while (1)
    {
        sum += grp;
        if (sum > n)
            break;
        else if ((n - sum) % grp == 0)
        {
            temp = (n - sum) / grp;
            for (int i = 1; i < grp; i++)
            {
                cout << temp + i << " + ";
            }
            cout << temp + grp << " = " << n << '\n';
            cnt++;
            grp++;
        }
        else
            grp++;
    }
    cout << cnt;
    return 0;
}