#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int curr;
    int count_2 = 0;
    int count_5 = 0;
    for (int i = 2; i <= n; i++) {
        curr = i;
        while(curr % 2 == 0) {
            count_2++;
            curr /= 2;
        }
        while(curr % 5 == 0) {
            count_5++;
            curr /= 5;
        }
    }
    if (count_2 < count_5) {
        cout << count_2 << '\n';
    }
    else {
        cout << count_5 << '\n';
    }
    return 0;
}