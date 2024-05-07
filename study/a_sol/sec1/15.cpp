#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int count = 0;
    bool flag = true;
    for (int i = 2; i <= n;i++)
    {
        flag = true;
        for (int j = 2; j * j <= i;j++)
        {
            if (i % j == 0)
            {
                flag = false;
                break;
            }
            
        }
        if (flag == true)
            count++;
    }
    cout << count << '\n';
    return 0;
}