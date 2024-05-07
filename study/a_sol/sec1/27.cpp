#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    // cin.tie(nullptr);
    int n;
    cin >> n;
    
    vector<int> fact(n);
    for (int i=0; i<n; i++) {
        fact[i] = i + 1;
    }
    vector<int> primes;
    bool flag;
    for (int i=2; i<=n; i++) {
        flag = true;
        for (int j=2; j*j<=i; j++) {
            if (i % j == 0) {
                flag = false;
                break;
            }
        }
        if (flag)
            primes.push_back(i);
    }

    string res = to_string(n) + "! = ";
    vector<int> cnt(primes.size());
    int curr;
    for (int j=1; j<n; j++) {
        curr = fact[j];
        for (int i=0; i<primes.size(); i++) {
            if (primes[i] > curr)
                break;
            while (curr % primes[i] ==0) {
                cnt[i]++;
                curr /= primes[i];
            }
        }
    }
    for (int i=0; i<cnt.size(); i++) {
        res += to_string(cnt[i]) + " ";
    }
    cout << res;
    return 0;
}
