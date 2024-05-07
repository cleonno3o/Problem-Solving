#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int rope[46] = {0};
    rope[1] = 1;
    rope[2] = 2;
    int temp;
    for (int i = 3; i <= n; i++)
        rope[i] = rope[i - 1] + rope[i - 2];
    cout << rope[n];
    return 0;
}