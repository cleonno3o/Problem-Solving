#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string num;
    cin >> num;
    int left = 0;
    int right = 0;
    int curr;
    int count = 0;
    for (int i=0; i<num.size(); i++) {
        curr = num[i] - '0';
        if (num.size() == 1) {

        }
        else if (i == 0) {
            left = 0;
            right = stoi(num.substr(1,num.size() - 1));
        }
        else if (i == num.size() - 1) {
            left = stoi(num.substr(0,i));
            right = 0;
        }
        else {
            left = stoi(num.substr(0,i));
            right = stoi(num.substr(i + 1, num.size() - i));
        }
        int left_size = i;
        int right_size = num.size() - 1 - i;
        // cout << left_size << " " << right_size;
        int nums = 1;
        for (int j=0; j<right_size; j++) {
            nums *= 10;
        }
        if (curr > 3) {
            count += (left + 1) * nums;
        }
        else if (curr == 3) {
            count += left * nums;
            count += right + 1;
        }
        else {
            count += left * nums;
        }
        // cout << "count: " << count << '\n';
    }
    cout << count;

    return 0;
}