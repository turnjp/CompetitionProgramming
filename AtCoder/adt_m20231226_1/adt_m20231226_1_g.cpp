// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

// 4方向差分
const int dx[4] = {0, 0, -1, 1};
const int dy[4] = {-1, 1, 0, 0};

int rec(vector<string> mass, set<pair<int, int>> ice,
        set<pair<int, int>> stopped, pair<int, int> curr_pos) {
    int y1 = curr_pos.first;
    int x1 = curr_pos.second;
    int max_num = 0;

    // cout << max_num << ":";
    // for(auto &ic : ice) {
    //     cout << ic.first << "," << ic.second << " ";
    // }
    // cout << endl;

    for(int i = 0; i < 4; i++) {
        int y2 = y1 + dy[i];
        int x2 = x1 + dx[i];

        set<pair<int, int>> ice2(ice);
        while(mass[y2][x2] != '#') {
            ice2.insert({y2, x2});
            y2 += dy[i];
            x2 += dx[i];
        }

        // 岩手前
        y2 -= dy[i];
        x2 -= dx[i];

        max_num = max(max_num, (int)ice2.size());

        // 到達したことがない場合
        if(stopped.find({y2, x2}) == stopped.end()) {
            set<pair<int, int>> stopped2(stopped);
            stopped2.insert({y2, x2});
            max_num = max(max_num, rec(mass, ice2, stopped2, {y2, x2}));
        }
    }

    // cout << "return" << endl;
    return max_num;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> mass(n);
    for(auto &s : mass) {
        cin >> s;
    }

    set<pair<int, int>> ice;
    set<pair<int, int>> stopped;
    pair<int, int> curr_pos = {1, 1};

    ice.insert(curr_pos);
    stopped.insert(curr_pos);

    cout << rec(mass, ice, stopped, curr_pos) << endl;
    return 0;
}
