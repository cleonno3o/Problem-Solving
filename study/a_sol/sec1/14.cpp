#include <iostream>
using namespace std;

int reverse(int);
bool isPrime(int);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (isPrime(reverse(temp)))
            cout << reverse(temp) << " ";
    }
    cout << '\n';
    return 0;
}

bool isPrime(int x)
{
    if (x == 1)
        return false;
    for (int i = 2; i < x;i++)
    {
        if (x % i == 0)
            return false;
    }
    return true;
}

int reverse(int x)
{
    int res = 0;
    while (1)
    {
        if (x == 0)
            break;
        res *= 10;
        res += x % 10;
        x /= 10;
    }
    return res;
}