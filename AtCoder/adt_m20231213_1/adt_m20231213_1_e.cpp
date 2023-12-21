#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

const int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};
const int dy[8] = {2, 1, -1, -2, -2, -1, 1, 2};

int main() {
    vector<pair<long long, long long>> pv(2, {0, 0});
    cin >> pv[0].first >> pv[0].second >> pv[1].first >> pv[1].second;

    vector<vector<pair<long long, long long>>> pvv(
        2, vector<pair<long long, long long>>(8, {0, 0}));

    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < 8; j++) {
            pvv[i][j].first = pv[i].first + dx[j];
            pvv[i][j].second = pv[i].second + dy[j];
        }
    }

    for(int i = 0; i < 8; i++) {
        for(int j = 0; j < 8; j++) {
            if(pvv[0][i] == pvv[1][j]) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
