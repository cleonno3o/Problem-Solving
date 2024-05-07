#include <iostream>
using namespace std;

int digit_sum(int x);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    int num;
    // int arr[100];
    int max_num = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        if (digit_sum(num) > digit_sum(max_num))
            max_num = num;
        else if (digit_sum(num) == digit_sum(max_num) && num > max_num)
            max_num = num;
    }
    cout << max_num;
    return 0;
}

int digit_sum(int x) {
    int temp = 0;
    int sum = 0;
    while (1) {
        if (x == 0)
            break;
        temp = x % 10;
        x = x / 10;
        sum += temp;
    }
    return sum;
}