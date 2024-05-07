#include <iostream>
#include <string>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    int age;
    int years;
    char sex;
    cin >> str;
    age = 2019 - stoi(str.substr(0, 2)) + 1;
    years = stoi(str.substr(7, 1));
    if (years >= 3)
        age = 2019 - stoi(str.substr(0, 2)) - 2000 + 1;
    else
        age = 2019 - stoi(str.substr(0, 2)) - 1900 + 1;
    if (years % 2 == 0)
        sex = 'W';
    else
        sex = 'M';
    cout << age << " " << sex << "\n";
    return 0;
}