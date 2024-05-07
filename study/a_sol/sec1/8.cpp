#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    char str[31];
    cin >> str;
    int open_count = 0;
    for (auto &e:str) {
        if (e == '(')
            open_count++;
        else if (e == ')')
            open_count--;
        if (open_count < 0) {
            cout << "NO" << '\n';
            return 0;
        }
    }
    cout << "YES" << '\n';

    return 0;
}