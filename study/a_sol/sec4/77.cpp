#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> graph[1001];
vector<int> visited;
queue<int> q;
int ch[1001];

int main()
{
    int n, m;
    cin >> n >> m;
    int a, b;
   
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    int start, end;
    cin >> start >> end;
    ch[start] = 1;
    q.push(start);
    while (!q.empty())
    {
        start = q.front();
        if (start == end)
            break;
        q.pop();
        for (int i = 0; i < graph[start].size(); i++)
        {
            if (ch[graph[start][i]] == 0)
            {
                q.push(graph[start][i]);
                ch[graph[start][i]] = 1;
            }
        }
    }
    if (start == end)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}