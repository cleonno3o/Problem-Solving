#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int n;
    int m;
    int combo = 0;
    int max_combo = 0;
    int noise;
    bool reset = false;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> noise;
        if (noise > m)
        {
            combo += 1;
            if (combo > max_combo)
                max_combo = combo;
        }
        else
            combo = 0;
    }
    if (max_combo == 0)
        max_combo = -1;
    cout << max_combo << '\n';
    return 0;
}