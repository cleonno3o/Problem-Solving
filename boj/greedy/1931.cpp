#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
        return a.second < b.second;
    return a.first < b.first;
}
int main()
{
    int n;
    cin >> n;
    vector<pair<int, int> > time(n);
    int a, b;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        time[i] = make_pair(a, b);
    }
    sort(time.begin(), time.end(), cmp);
    int spos = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (time[i].first >= spos)
        {
            spos = time[i].second;
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}