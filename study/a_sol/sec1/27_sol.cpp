#include <iostream>
#include <vector>
using namespace std;

int main()  {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> cnt(n);
    int curr;
    for (int i=2; i<=n; i++) {
        curr = i;
        int j = 2;
        while(1) {
            if (curr % j != 0) {
                j++;
            }
            else {
                cnt[j-1]++;
                curr /= j;
            }
            if (curr == 1)
                break;
        }
    }
    cout << n << "! = ";
    for (int i=1; i<n; i++) {
        if (cnt[i] != 0)
            cout << cnt[i] << " ";
    }
    return 0;
}