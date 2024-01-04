#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int h, w;
    cin >> h >> w;

    vector<vector<int>> avv(h, vector<int>(w));
    for(auto &av : avv) {
        for(auto &a : av) {
            cin >> a;
        }
    }
    for(int i = 0; i < w; i++) {
        for(int j = 0; j < h; j++) {
            cout << avv[j][i] << ((j < h - 1) ? " " : "\n");
        }
    }

    return 0;
}
