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

    for(auto &col : s_rotate) {
        if(s_col_cnt_map.find(col) == s_col_cnt_map.end()) {
            s_col_cnt_map[col] = 0;
        }
        s_col_cnt_map[col]++;
    }

    for(auto &col : t_rotate) {
        if(t_col_cnt_map.find(col) == t_col_cnt_map.end()) {
            t_col_cnt_map[col] = 0;
        }
        t_col_cnt_map[col]++;
    }

    for(const auto &[key_s, cnt] : t_col_cnt_map) {
        if(s_col_cnt_map[key_s] != cnt) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
