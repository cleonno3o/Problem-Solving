#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int l, c;
string test = "aeiou";
char res[20];
vector<char> alpha;
void dfs(char res[], int len, int start, int rule1, int rule2)
{
    if (len == l)
    {
        if (rule1 >= 1 && rule2 >=2)
        {
            res[len] = '\0';
            cout << res << '\n';
        }
        return;
    }
    else
    {
        for (int i = start; i < c; i++)
        {
            res[len] = alpha[i];
            if (test.find(alpha[i]) == string::npos)
                dfs(res, len + 1, i + 1, rule1, rule2 + 1);
            else
                dfs(res, len + 1, i + 1, rule1 + 1, rule2);
        }
    }
}
int main()
{
    cin >> l >> c;
    char temp;
    for (int i = 0; i < c; i++)
    {
        cin >> temp;
        alpha.push_back(temp);
    }
    sort(alpha.begin(), alpha.end());
    dfs(res,0,0,0,0);
    return 0;
}