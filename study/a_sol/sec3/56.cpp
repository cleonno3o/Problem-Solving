#include <iostream>
using namespace std;

void PrintNum(int);
int main()
{
    int n;
    cin >> n;
    PrintNum(n);
    return 0;
}

void PrintNum(int x)
{
    if (x > 1)
    {
        PrintNum(x - 1);
        cout << x << " ";
    }
    else
        cout << x << " ";
}