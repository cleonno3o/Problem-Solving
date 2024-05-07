#include <iostream>
#include <vector>
using namespace std;

int sudoku[9][9];
int dx[] = {0,0,0,1,1,1,2,2,2};
int dy[] = {0,1,2,0,1,2,0,1,2};
vector<pair<int, int> > blank;
bool endprog = false;
void dfs(int curr) {
    if (curr == blank.size()) {
        endprog = true;
        return;
    }
    int x = blank[curr].first;
    int y = blank[curr].second;
    int check[10] = {0};
    for (int k = 0; k < 9; k++) {
        int n1 = sudoku[x][k];
        int n2 = sudoku[k][y];
        int n3x = (x / 3) * 3 + dx[k];
        int n3y = (y / 3) * 3 + dy[k];
        int n3 = sudoku[n3x][n3y];
        check[n1] = 1;
        check[n2] = 1;
        check[n3] = 1;
    }
    for (int k = 1; k <= 9; k++) {
        if (check[k] == 0) {
            sudoku[x][y] = k;
            dfs(curr + 1);
            if (endprog)
                return;
            sudoku[x][y] = 0;
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cin >> sudoku[i][j];
            if (sudoku[i][j] == 0)
                blank.push_back(make_pair(i,j));
        }
    }
    dfs(0);
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << sudoku[i][j] << ' ';
        }
        cout << '\n';
    }
    return 0;
}