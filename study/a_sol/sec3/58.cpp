#include <iostream>
using namespace std;
void PreOrder(int x);
void InOrder(int);
void PostOrder(int);
int main()
{
    PreOrder(1);
    cout << '\n';
    InOrder(1);
    cout << '\n';
    PostOrder(1);
    return 0;
}
void PreOrder(int x)
{
    if (x > 7)
        return;
    else
    {
        cout << x << " ";
        PreOrder(2 * x);
        PreOrder(2 * x + 1);
    }
}
void InOrder(int x)
{
    if (x > 7)
        return;
    else
    {
        InOrder(2 * x);
        cout << x << " ";
        InOrder(2 * x + 1);
    }
}
void PostOrder(int x)
{
    if (x > 7)
        return;
    else
    {
        PostOrder(2 * x);
        PostOrder(2 * x + 1);
        cout << x << " ";
    }
}
