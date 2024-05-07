#include <iostream>
using namespace std;

int arr[10];
int check[10];
int n;
int sum;
bool flag = false;
int temp = 0;
void DFS(int l)
{
    if (l == n + 1)
    {
        if (temp == sum / 2)
            flag = true;
        return;
    }
    else
    {
        if (sum % 2 == 1 || flag == true)
            return;
        temp += arr[l - 1];
        DFS(l + 1);
        temp -= arr[l - 1];
        DFS(l + 1);
    }
}
int main()
{
    cin >> n;
    sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    DFS(1);
    if (flag)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}