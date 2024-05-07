#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
struct My {
    int start;
    int end;
    int cost;
    My(int s,int e, int val)
    {
        start = s;
        end = e;
        cost = val;
    }
    bool operator<(const My &b) const 
    {
        return cost < b.cost;
    }
};
int ar[101];
vector<My> vec;
int sum = 0;
int Find(int a)
{
    if (a == ar[a])
        return a;
    else
    {
        return ar[a] = Find(ar[a]);
    }
}
void Union(int a, int b, int c)
{
    int aar = Find(a);
    int bar = Find(b);
    if(aar != bar)
    {
        ar[aar] = bar;
        sum += c;
    }
}
int main()
{
    int v, e;
    cin >> v >> e;
    for (int i = 1; i <= 100;i++)
    {
        ar[i] = i;
    }
    int a, b, c;
    for (int i = 0; i < e; i++)
    {
        cin >> a >> b >> c;
        vec.push_back(My(a, b, c));
    }
    sort(vec.begin(), vec.end());
    for (int i = 0; i < vec.size(); i++)
    {
        if (Find(vec[i].start) != Find(vec[i].end))
        {
            Union(vec[i].start, vec[i].end, vec[i].cost);
            // sum += vec[i].cost;
        }
    }
    cout << sum;
    return 0;
}