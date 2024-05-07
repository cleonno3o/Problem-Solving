#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    char str[101];
    int temp = 0;
    cin >> str;
    int count[10];
    std::fill_n(count, 10, 0);
    for (int i = 0; i < 101;i++)
    {
        if (str[i] == '\0')
            break;
        count[str[i] - '0']++;
    }
    int max_count = 0;
    int max_num = 0;
    for (int i = 0; i < 10; i++)
    {
        if (count[i] >= max_count)
        {
            max_count = count[i];
            max_num = i;
        }
    }
    cout << max_num << '\n';
    return 0;
}