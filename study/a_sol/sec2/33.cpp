#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int idx;
    int temp;
    for (int i = 0; i < n - 1; i++) {
        idx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[idx])
                idx = j;
        }
        temp = arr[i];
        arr[i] = arr[idx];
        arr[idx] = temp;
    }
    temp = arr[0];
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != temp) {
            cnt++;
            temp = arr[i];
        }
        if (cnt == 2) {
            cout << temp;
            break;
        }
    }
    return 0;
}