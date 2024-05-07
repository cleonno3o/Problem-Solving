#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    string str;
    string str2;
    getline(cin, str);
    for (int i = 0; i < str.size();i++)
    {
        if (str[i] != ' ') {
            str2 += str[i];
        }
    }
    for (auto& e:str2)
        e = tolower(e);
    cout << str2 << "\n";
    return 0;
}