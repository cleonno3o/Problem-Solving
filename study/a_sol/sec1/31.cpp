#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string eq;
    cin >> eq;
    int c_idx;
    int h_idx;
    int ccount;
    int hcount;
    for (int i = 0; i < eq.size(); i++) {
        c_idx = eq.find('C');
        h_idx = eq.find('H');
        if (h_idx - c_idx == 1)
            ccount = 1;
        else {
            ccount = stoi(eq.substr(c_idx + 1,h_idx - c_idx - 1));
        }
        if (h_idx == eq.size()-1)
            hcount = 1;
        else {
            hcount = stoi(eq.substr(h_idx + 1, eq.size() - h_idx - 1));
        }
    }
    cout << ccount * 12 + hcount;
    return 0;
}