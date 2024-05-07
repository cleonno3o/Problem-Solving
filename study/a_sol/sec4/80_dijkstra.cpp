#include <iostream>
#include <vector>
#include <queue>
using namespace std;
struct Edge
{
    int dest;
    int cost;
    Edge(int e, int v)
    {
        dest = e;
        cost = v;
    }
    bool operator< (const Edge &b) const
    {
        return cost > b.cost;
    }
};
int main()
{
    int n, m;
    cin >> n >> m;

    int vertex = 0;
    vector<pair<int, int>> graph[21];
    vector<int> dist(21, 2147000000);
    priority_queue<Edge> q;
    int ch[21] = {0};

    int a, b, c;
    for (int i = 0; i < m; i++)
    {
        cin >> a >> b >> c;
        graph[a].push_back({b, c});
        vertex++;
    }

    int min_cost;
    int temp_cost;
    q.push(Edge(1, 0));
    dist[1] = 0;
    while (!q.empty())      // priority queue를 사용하여 체크 배열 대체 및 최소값 찾기 효율성 증대
    {
        int curr_pos = q.top().dest;
        int cost = q.top().cost;
        q.pop();
        if (cost > dist[curr_pos])
            continue;
        for (int i = 0; i < graph[curr_pos].size(); i++)
        {
            int next_pos = graph[curr_pos][i].first;
            int next_cost = graph[curr_pos][i].second;
            if (next_cost + cost < dist[next_pos])
            {
                dist[next_pos] = next_cost + cost;
                q.push(Edge(next_pos, next_cost + cost));
            }
        }
    }
    for (int i = 0; i < vertex; i++)    //일반적 거리 배열과 체크 배열을 사용하여 순회
    {
        min_cost = 0;
        for (int j = 1; j <= 20; j++)
        {
            if (dist[j] < dist[min_cost] && ch[j] == 0)
            {
                min_cost = j;
            }
        }
        ch[min_cost] = 1;
        for (int j = 0; j < graph[min_cost].size(); j++)
        {
            if (graph[min_cost][j].second + dist[min_cost] < dist[graph[min_cost][j].first])
                dist[graph[min_cost][j].first] = graph[min_cost][j].second + dist[min_cost];
        }
    }
    for (int i = 2; i <= 20; i++)
    {
        if (ch[i] == 1)
            cout << i << " : " << dist[i] << '\n';
        else
            cout << i << " : impossible\n";
    }
    return 0;
}