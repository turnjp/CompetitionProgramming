#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int m;
    string s1, s2, s3;
    cin >> m >> s1 >> s2 >> s3;

    int min_time = INT_MAX;
    for(int i = 0; i < m * 3; i++) {
        for(int j = 0; j < m * 3; j++) {
            for(int k = 0; k < m * 3; k++) {
                // ３つのボタン押下タイミングが全て異なる　かつ　文字が同じ
                if(i != j && j != k && k != i && s1[i % m] == s2[j % m] &&
                   s2[j % m] == s3[k % m]) {
                    int time = max(i, max(j, k));
                    min_time = min(min_time, time);
                }
            }
        }
    }
    if(min_time == INT_MAX) {
        cout << -1 << endl;
    } else {
        cout << min_time << endl;
    }

    return 0;
}
