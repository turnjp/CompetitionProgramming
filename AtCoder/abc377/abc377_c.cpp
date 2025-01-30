#include <bits/stdc++.h>

using namespace std;

// 座標y,xが高さh幅wの範囲内か（開始座標(0,0)）
bool in_mass(int y, int x, int h, int w) {
    return x >= 0 && y >= 0 && x < w && y < h;
}

int main() {
    long long n, m;
    cin >> n >> m;

    set<pair<int, int>> ng_set;

    vector<pair<int, int>> ps(m);
    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> y >> x;
        y--;
        x--;
        ps[i] = make_pair(y, x);

        ng_set.insert(make_pair(y, x));
    }
    // cout << ps[0][0] << endl;

    const int dy[8] = {2, 1, -1, -2, -2, -1, +1, +2};
    const int dx[8] = {1, 2, 2, 1, -1, -2, -2, -1};

    // cout << "-----" << endl;
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < 8; j++) {
            int y = ps[i].first + dy[j];
            int x = ps[i].second + dx[j];
            if(in_mass(y, x, n, n)) {
                // cout << y << " " << x << endl;
                ng_set.insert(make_pair(y, x));
            }
        }
    }

    cout << n * n - ng_set.size() << endl;

    return 0;
}
