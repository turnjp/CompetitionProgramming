#include <bits/stdc++.h>

using namespace std;

bool in_mass(int y, int x, int h, int w) {
    return x >= 0 && y >= 0 && x < w && y < h;
}

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    vector<string> mass(9);
    set<vector<pair<int, int>>> square_set;
    for(auto &s : mass)
        cin >> s;

    int cnt = 0;
    for(int y1 = 0; y1 < 9; y1++) {
        for(int x1 = 0; x1 < 9; x1++) {
            if(mass[y1][x1] == '#') {
                for(int y2 = 0; y2 < 9; y2++) {
                    for(int x2 = 0; x2 < 9; x2++) {
                        // 異なる点にポーンがある
                        if((x1 != x2 || y1 != y2) && mass[y2][x2] == '#') {
                            // 1,2頂点目の差
                            int y_diff = y2 - y1;
                            int x_diff = x2 - x1;

                            // 3,4頂点目の座標
                            int y3 = y2 + x_diff;
                            int x3 = x2 - y_diff;
                            int y4 = y3 - y_diff;
                            int x4 = x3 - x_diff;

                            // 正方形を一つの構造へ格納
                            vector<pair<int, int>> pv(4);
                            pv[0] = {y1, x1};
                            pv[1] = {y2, x2};
                            pv[2] = {y3, x3};
                            pv[3] = {y4, x4};

                            // 同じ正方形を一致させるためソート
                            sort(pv.begin(), pv.end());

                            // 3,4頂点目にポーンがある　かつ　未発見の正方形
                            if(in_mass(y3, x3, 9, 9) && mass[y3][x3] == '#' &&
                               in_mass(y4, x4, 9, 9) && mass[y4][x4] == '#' &&
                               square_set.find(pv) == square_set.end()) {
                                cnt++;
                                square_set.insert(pv);
                            }
                        }
                    }
                }
            }
        }
    }

    cout << cnt << endl;

    return 0;
}
