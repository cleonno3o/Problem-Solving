#include <iostream>
#include <vector>
#include <queue>
#include <stack>
using namespace std;
vector<int> graph[21];
queue<int> q;
stack<int> s;
int ch[21];
int dist[21] = {0};
int n, m;
void bfs(int start)
{

}
int main()
{

    cin >> n >> m;
    int a, b;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b;
        graph[a].push_back(b);
    }
    int cnt = 0;
    q.push(1);
    int root;
    while (q.size() > 0)
    {
        root = q.front();
        q.pop();
        for (int i = 0; i < graph[root].size(); i++)
        {
            if (ch[graph[root][i]] == 0)
            {
                q.push(graph[root][i]);
                ch[graph[root][i]] = 1;
                dist[graph[root][i]] = dist[root] + 1;
            }
        }
    }
    for (int i = 2; i <= 6; i++)
    {
        cout << i << " : " << dist[i] << '\n';
    }
    return 0;
}