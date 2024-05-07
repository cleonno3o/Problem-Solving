#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int a[10];
    int b[10];
    int score_a = 0;
    int score_b = 0;
    const int win = 3;
    const int draw = 1;
    const int lose = 0;
    char last_win = 'D';
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    for (int i = 0; i < 10; i++)
        cin >> b[i];

    for (int i = 0; i < 10; i++)
    {
        if (a[i] > b[i])
        {
            score_a += win;
            last_win = 'A';
        }
        else if (a[i] == b[i])
        {
            score_a += draw;
            score_b += draw;
        }
        else
        {
            score_b += win;
            last_win = 'B';
        }
    }
    cout << score_a << " " << score_b << '\n';
    if (score_a > score_b)
        cout << 'A' << '\n';
    else if (score_b > score_a)
        cout << 'B' << '\n';
    else
        cout << last_win << '\n';
    return 0;
}