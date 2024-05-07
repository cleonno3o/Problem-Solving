#include <iostream>
using namespace std;

int arr[11];
void PrintPart(int l, int n)
{
    if (l == n + 1)
    {
        for (int i = 1; i <= n; i++)
        {
            if (arr[i] == 1)
                cout << i << ' ';
        }
        cout << '\n';
        return;
    }
    else
    {
        arr[l] = 1;
        PrintPart(l + 1, n);
        arr[l] = 0;
        PrintPart(l + 1, n);
    }
}
int main()
{
    int n;
    cin >> n;
    PrintPart(1, n);
    return 0;
}