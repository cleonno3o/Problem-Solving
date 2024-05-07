#include <iostream>
using namespace std;

struct Block
{
    int area;
    int height;
    int weight;
    Block(int x, int y, int z)
    {
        area = x;
        height = y;
        weight = z;
    }
    
    bool operator< (const Block& target) const
    {
        if ()
    }
};
int main()
{
    int n;
    cin >> n;
    int a, b, c;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
    }
    return 0;
}