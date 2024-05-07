#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    // ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    // freopen("in5.txt","rt",stdin);
    int n;
    cin >> n;
    vector<int> vec;
    int temp;
    for (int i = 0; i < n;i++) {
        cin >> temp;
        vec.push_back(temp);
    }
    sort(vec.begin(), vec.end());
    cout << vec.back() - vec.front() << "\n";
    return 0;
}