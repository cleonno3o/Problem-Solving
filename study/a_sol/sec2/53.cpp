#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
using namespace std;
char arr[1000];
int top = -1;
void my_push(int);
char my_pop();
char nums[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    // stack<int> a;

    while (n != 0)
    {
        my_push(nums[n % k]);
        n /= k;
    }
    while (top != -1)
    {
        cout << my_pop();
    }
    return 0;
}

void my_push(int x)
{
    arr[++top] = x;
}
char my_pop()
{
    return arr[top--];
}