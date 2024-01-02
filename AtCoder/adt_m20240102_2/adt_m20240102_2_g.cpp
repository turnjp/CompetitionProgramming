#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int w, h, n;
    cin >> w >> h >> n;
    vector<int> pv(n);
    vector<int> qv(n);

    for(int i = 0; i < n; i++) {
        cin >> pv[i] >> qv[i];
    }

    int a;
    cin >> a;
    vector<int> av(a + 2);
    av[0] = 0;
    for(int i = 1; i < a + 1; i++) {
        cin >> av[i];
    }
    av[a + 1] = w;

    int b;
    cin >> b;
    vector<int> bv(b + 2);
    bv[0] = 0;
    for(int i = 1; i < b + 1; i++) {
        cin >> bv[i];
    }
    bv[b + 1] = h;

    map<pair<int, int>, int> cnt_map;
    for(int i = 0; i < n; i++) {
        int p = pv[i];
        int q = qv[i];

        int a_idx = upper_bound(av.begin(), av.end(), p) - av.begin() - 1;
        int b_idx = upper_bound(bv.begin(), bv.end(), q) - bv.begin() - 1;

        if(cnt_map.find({a_idx, b_idx}) == cnt_map.end()) {
            cnt_map[{a_idx, b_idx}] = 0;
        }
        cnt_map[{a_idx, b_idx}]++;
    }

    int max_v = -1;
    int min_v = INT_MAX;
    for(const auto &[_, cnt] : cnt_map) {
        max_v = max(max_v, cnt);
        min_v = min(min_v, cnt);
    }
    if(cnt_map.size() < (a + 1) * (b * 1)) {
        min_v = 0;
    }
    cout << min_v << " " << max_v << endl;

    return 0;
}
