#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    string str;
    int cnt = 0;
    for (int i=1; i<=n; i++) {
        str = to_string(i);
        for (int i=0; i<str.size(); i++) {
            if (str[i] == '3')
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}