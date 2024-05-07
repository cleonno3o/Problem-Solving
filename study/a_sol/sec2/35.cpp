#include <iostream>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    int n;
    cin >> n;

    int arr[100];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int temp;
    for (int i = n - 1; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            if (arr[j] > 0 && arr[j + 1] < 0) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
    return 0;
}