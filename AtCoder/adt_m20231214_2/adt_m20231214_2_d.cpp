#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n;
    cin >> n;
    vector<vector<bool>> mass(100, vector(100, false));

    for(int i = 0; i < n; i++) {
        int x1, x2, y1, y2;
        cin >> x1 >> x2 >> y1 >> y2;
        for(int xi = x1; xi < x2; xi++) {
            for(int yi = y1; yi < y2; yi++) {
                mass[xi][yi] = true;
            }
        }
    }

    int cnt = 0;
    for(int i = 0; i < 100; i++) {
        for(int j = 0; j < 100; j++) {
            if(mass[i][j]) {
                cnt++;
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
