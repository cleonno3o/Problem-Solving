#include <iostream>
#include <vector>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    // vector<int> vec(101);
    vector<int> scores(n);
    vector<int> rank(n);
    for (int i=0; i<n; i++)
    {
        cin >> scores[i];
    }
    int cnt;
    for (int i=0; i<n; i++)
    {
        cnt = 1;
        for (int j=0; j<n; j++)
        {
            if (i != j && scores[i] < scores[j])
                cnt++;
        }
        rank[i] = cnt;
    }
    for (int i=0; i<n; i++)
    {
        cout << rank[i] << " ";
    }
    return 0;
}