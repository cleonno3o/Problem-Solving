#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
struct Schedule
{
    int money;
    int deadline;
    Schedule()
    {

    }
    Schedule(int _money, int _deadline)
    {
        money = _money;
        deadline = _deadline;
    }
    bool operator<(const Schedule &b) const
    {
        if (deadline != b.deadline)
            return deadline > b.deadline;
        if (money != b.money)
            return money > b.money;
    }
};
int main()
{
    int n;
    cin >> n;
    int m, d;
    int max_dead = -100000;
    priority_queue<int> q;
    vector<Schedule> v;
    for (int i = 0; i < n; i++)
    {
        cin >> m >> d;
        if (d > max_dead)
            max_dead = d;
        v.push_back(Schedule(m, d));
    }
    int sum = 0;
    sort(v.begin(), v.end());
    int i = 0;
    for (int j = max_dead; j >= 1; j--)
    {
        for (; i < v.size(); i++)
        {
            if (v[i].deadline < max_dead)
                break;
            else
                q.push(v[i].money);
        }
        if (!q.empty())
        {
            sum += q.top();
            q.pop();
        }
    }
    cout << sum;
    return 0;
}