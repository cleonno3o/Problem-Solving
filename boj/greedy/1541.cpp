#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string eq;
    getline(cin, eq);
    eq += "\n";
    cout << eq << '\n';
    // istringstream iss(eq);
    // int num;
    // string op;
    // while (1)
    // {
    //     iss >> num >> op;
    //     if (op == "=")
    //         break;
    //     else 
    //         cout << "num은 " << num << "oper " << op << '\n';
    // }
    // cout << "쫓겨난 num은 " << num;
    return 0;
}