#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n, m;

    cin >> n >> m;

    vector<vector<bool>> pv(n, vector(n, false));

    for(int i = 0; i < m; i++) {
        int prev_a;
        for(int j = 0; j < n; j++) {
            int a;
            cin >> a;
            a -= 1;
            if(j > 0) {
                pv[a][prev_a] = true;
                pv[prev_a][a] = true;
            }
            prev_a = a;
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(!pv[i][j]) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
