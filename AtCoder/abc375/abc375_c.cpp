// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    int n;

    cin >> n;
    vector<vector<char>> prev_rot(n, vector<char>(n));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> prev_rot[i][j];
        }
    }

    vector<vector<char>> rot(n, vector<char>(n));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            // 外周からの距離
            int ty = (i >= n / 2) ? n - 1 - i : i;
            int tx = (j >= n / 2) ? n - 1 - j : j;
            // 必要な回転数　（例）外周からの距離0なら1回
            int r_num = (min(tx, ty)) % 4 + 1;

            switch(r_num) {
            case 4: // そのまま
                rot[i][j] = prev_rot[i][j];
                break;
            case 1: // 右回転
                rot[j][(n - 1) - i] = prev_rot[i][j];
                break;
            case 2: // 斜め反転
                rot[(n - 1) - i][(n - 1) - j] = prev_rot[i][j];
                break;
            case 3: // 左回転
                rot[(n - 1) - j][i] = prev_rot[i][j];
                break;

            default:
                break;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << rot[i][j];
        }
        cout << endl;
    }

    return 0;
}
