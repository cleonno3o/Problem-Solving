#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    int max_combo = 0;
    int combo = 1;
    for (int i = 1; i < n; i++)
    {
        if (nums[i] >= nums[i - 1])
            combo++;
        else
            combo = 1;
        if (combo > max_combo)
            max_combo = combo;
    }
    cout << max_combo << '\n';
    return 0;
}