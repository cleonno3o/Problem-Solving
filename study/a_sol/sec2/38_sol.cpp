#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int is[101] = {0};
    int os[101] = {0};
    for (int i = 1; i <= n; i++) {
        cin >> is[i];
    }
    int pos;
    for (int i = n; i >= 1; i--) {
        pos = i;
        for (int j = 1; j <= is[i]; j++) {
            os[pos] = os[pos + 1];
            pos++;
        }
        os[pos] = i;
    }
    for (int i = 1; i <= n; i++) {
        cout << os[i] << ' ';
    }
    return 0; 
}