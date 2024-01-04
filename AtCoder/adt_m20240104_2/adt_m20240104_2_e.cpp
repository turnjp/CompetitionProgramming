#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int h, w;
    cin >> h >> w;
    vector<string> s_rotate(w);
    vector<string> t_rotate(w);
    map<string, int> s_col_cnt_map;
    map<string, int> t_col_cnt_map;

    // 列ごとに文字列を保持（いつもの行ではなく）
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            char ch;
            cin >> ch;
            s_rotate[j].push_back(ch);
        }
    }
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            char ch;
            cin >> ch;
            t_rotate[j].push_back(ch);
        }
    }

    // 列ごとに件数をカウント
    for(auto &col : s_rotate) {
        s_col_cnt_map[col]++;
    }
    for(auto &col : t_rotate) {
        t_col_cnt_map[col]++;
    }

    // 同一か
    if(t_col_cnt_map == s_col_cnt_map) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}
