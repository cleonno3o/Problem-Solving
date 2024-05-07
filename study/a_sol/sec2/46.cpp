#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> task(n);
    for (int i = 0; i < n; i++)
    {
        cin >> task[i];
    }
    int k;
    cin >> k;
    int todo = 0;
    int cnt = 0;
    for (int i = 0; i < k + 1; i++)
    {
        if (todo == n)
            todo = 0;
        if (task[todo] > 0)
        {
            if (i == k)
                break;
            cnt = 0;
            task[todo] -= 1;
        }
        else
        {
            if (cnt == n)
            {
                todo = -2;
                break;
            }
            cnt++;
            i--;
        }
        todo++;
    }

    cout << todo + 1;
    return 0;
}