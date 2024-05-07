#include <iostream>
#include <vector>
using namespace std;
int n;
vector<int> nums;
int oper[4];
int max_res = -2147000000;
int min_res = 2147000000;
void dfs(int idx, int ans)
{
    if (idx == n - 1)
    {
        if (ans < min_res)
            min_res = ans;
        if (ans > max_res)
            max_res = ans;
        return;
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            int next_num = nums[idx + 1];
            if (oper[i] > 0)
            {
                if (i == 0)
                {
                    oper[i]--;
                    dfs(idx + 1, ans + next_num);
                    oper[i]++;
                }
                else if (i ==1)
                {
                    oper[i]--;
                    dfs(idx + 1, ans - next_num);
                    oper[i]++;
                }
                else if (i == 2)
                {
                    oper[i]--;
                    dfs(idx + 1, ans * next_num);
                    oper[i]++;
                }
                
                else if (i == 3)
                {
                    oper[i]--;
                    dfs(idx + 1, ans / next_num);
                    oper[i]++;
                }
            }
        }
    }
}
int main()
{
    cin >> n;
    for (int i = 0; i < n;i++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    for (int i = 0; i < 4; i++)
        cin >> oper[i];

    dfs(0, nums[0]);
    cout << max_res << '\n'
         << min_res;
    return 0;
}