#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[52] = {0};
    int arr2[52] = {0};
    char str[101];
    char str2[101];
    bool flag = true;
    bool flag2 = true;
    cin >> str >> str2;
    for (int i = 0; i < 101; i++)
    {
        if (str[i] == '\0')
            flag = false;
        if (str2[i] == '\0')
            flag2 = false;
        if (flag)
        {
            if (str[i] < 'a')
                arr[str[i] - 'A']++;
            else if(str[i] >= 'a')
                arr[str[i] - 'a' + 26]++;
        }
        if (flag2)
        {
            if (str2[i] < 'a')
                arr2[str2[i] - 'A']++;
            else if(str2[i] >= 'a')
                arr2[str2[i] - 'a' + 26]++;
        }
    }
    for (int j = 0; j < 52; j++)
    {
        if (arr[j] != arr2[j])
        {
            cout << "NO" << '\n';
            return 0;
        }
    }
    cout << "YES" << '\n';
    return 0;
}