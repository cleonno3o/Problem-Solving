#include <iostream>
using namespace std;
void ToBinary(int x)
{
    if (x == 0)
        return;
    else
    {
        ToBinary(x / 2);
        cout << x % 2;
    }
}
int main()
{
    int n;
    cin >> n;
    ToBinary(n);
    return 0;
}