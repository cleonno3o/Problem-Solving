#include <iostream>
#include <vector>
using namespace std;
int my_queue[100];
int front = -1;
int back = -1;
void my_push(int x)
{
    my_queue[++back] = x;
}
int my_pop()
{
    int temp = my_queue[++front];
    return temp;
}
int main()
{
    // int n;
    // cin >> n;
    vector<int> tree[10];
    int a, b;
    for (int i = 1; i <= 6; i++)
    {
        cin >> a >> b;
        tree[a].push_back(b);
    }
    my_push(1);
    int x;
    while(front < back)
    {
        x = my_pop();
        cout << x << " ";
        for (int i = 0; i < tree[x].size(); i++)
            my_push(tree[x][i]);
    }
    return 0;
}