#include <iostream>
#include <string>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    string temp;
    int num;
    int count = 0;
    cin >> str;
    for (int i = 0; i < str.size(); i++)
    {
        if (isdigit(str[i]))
            temp += str[i];
    }
    num = stoi(temp);
    for (int i = 1; i < num + 1;i++)
    {
        if (num % i == 0)
            count++;
    }
    cout << num << "\n" << count << "\n";
    return 0;
}