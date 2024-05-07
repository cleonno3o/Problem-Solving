#include <iostream>
#include <queue>
#include <vector>
using namespace std;
struct My
{
    int start;
    int end;
    int cost;
    My(){}
    My(int s, int e, int val)
    {
        start = s;
        end = e;
        cost = val;
    }
    bool operator<(const My &b) const
    {
        return cost > b.cost;
    }
};

int main()
{
    int v, e;
    cin >> v >> e;
    int a, b, c;
    vector<My> tree[101];
    priority_queue<My> q;
    int ch[101] = {0};
    int sum = 0;
    for (int i = 0; i < e; i++)
    {
        cin >> a >> b >> c;
        tree[a].push_back(My(a, b, c));
        tree[b].push_back(My(b, a, c));
    }
    
    q.push(My(1, 1, 0));
    ch[1] = 1;
    My temp;
    while (!q.empty())
    {
        temp = q.top();
        q.pop();
        for (int i = 0; i < tree[temp.end].size(); i++)
        {
            q.push(tree[temp.end][i]);
        }
        while (!q.empty())
        {
            if (ch[q.top().end] == 1)
                q.pop();
            else
            {
                ch[q.top().end] = 1;
                sum += q.top().cost;
                break;
            }
        }
    }
    cout << sum;
    return 0;
}