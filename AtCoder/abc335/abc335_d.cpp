#include <bits/stdc++.h>

using namespace std;

bool in_mass(int x, int y, int w, int h) {
    return x >= 0 && y >= 0 && x < w && y < h;
}

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n;
    cin >> n;

    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    vector<vector<int>> r(n, vector(n, 0));
    int x, y;
    x = y = 0;
    int cnt = 1;
    int d = 0;
    for(int i = 1; i < n * n; i++) {
        r[x][y] = cnt;
        cnt++;
        int nx = x + dx[d];
        int ny = y + dy[d];
        if(in_mass(nx, ny, n, n) && r[nx][ny] == 0) {
            x = nx;
            y = ny;
        } else {
            d = (d + 1) % 4;
            nx = x + dx[d];
            ny = y + dy[d];
            x = nx;
            y = ny;
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == n / 2 && j == n / 2) {
                cout << "T ";
            } else {
                cout << r[i][j] << ((j < n - 1) ? " " : "\n");
            }
        }
    }

    return 0;
}
