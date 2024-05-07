#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int s, e;
int root, dest;
int dist[10001];
int ch[10001];
int connected[] = {1, -1, 5};
vector<int> tree[10001];
queue<int> q;
int main()
{
    cin >> s >> e;
    root = s;
    dest = e;
    int pos = root;
    int next_pos;
    ch[root] = 1;
    q.push(root);
    while(!q.empty())
    {
        pos = q.front();
        q.pop();
        if (pos == dest)
            break;
        for (int i = 0; i < 3; i++)
        {
            next_pos = pos + connected[i];
            if (next_pos <= 10000 && next_pos >= 1)
            {
                if (ch[next_pos] == 0)
                {
                    ch[next_pos] = 1;
                    dist[next_pos] = dist[pos] + 1;
                    q.push(next_pos);
                }
            }
        }
    }
    // cout << dist[pos];
    for (auto&e:dist)
        cout << e << ' ';
    return 0;
}