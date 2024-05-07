#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    cin >> n;
    int arr[50000] = {0};
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j = j + i)
        {
            arr[j - 1]++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}