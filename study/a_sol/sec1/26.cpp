#include <iostream>
#include <vector>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> power(n);
    for (int i=0; i<n; i++) {
        cin >> power[i];
    }
    int rank;
    for (int i=0; i<n; i++) {
        rank = i + 1;
        for (int j=0; j<i; j++) {
            if (power[i] > power[j])
                rank--;
        }
        cout << rank << " ";
    }
    return 0;
}