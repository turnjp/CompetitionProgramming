#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n, q;
    cin >> n >> q;
    map<pair<int, int>, int> xk_map;
    map<int, int> a_cnt_map;

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        if(a_cnt_map.find(a) == a_cnt_map.end()) {
            a_cnt_map[a] = 0;
        }
        a_cnt_map[a]++;
        xk_map[{a, a_cnt_map[a]}] = i + 1;
    }

    for(int i = 0; i < q; i++) {
        int x, k;
        cin >> x >> k;
        if(xk_map.find({x, k}) != xk_map.end()) {
            cout << xk_map[{x, k}] << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
