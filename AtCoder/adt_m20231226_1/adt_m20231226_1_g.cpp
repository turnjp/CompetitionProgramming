// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

// 4方向差分
const int dx[4] = {0, 0, -1, 1};
const int dy[4] = {-1, 1, 0, 0};

vector<string> mass;

set<pair<int, int>> ice;
set<pair<int, int>> stopped;

void rec(pair<int, int> curr_pos) {
    int y1 = curr_pos.first;
    int x1 = curr_pos.second;

    // cout << max_num << ":";
    // for(auto &ic : ice) {
    //     cout << ic.first << "," << ic.second << " ";
    // }
    // cout << endl;

    for(int i = 0; i < 4; i++) {
        int y2 = y1 + dy[i];
        int x2 = x1 + dx[i];

        while(mass[y2][x2] != '#') {
            ice.insert({y2, x2});
            y2 += dy[i];
            x2 += dx[i];
        }

        // 岩手前
        y2 -= dy[i];
        x2 -= dx[i];

        // 到達したことがない場合
        if(stopped.find({y2, x2}) == stopped.end()) {
            stopped.insert({y2, x2});
            rec({y2, x2});
        }
    }
}

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;
        mass.push_back(s);
    }

    pair<int, int> curr_pos = {1, 1};

    ice.insert(curr_pos);
    stopped.insert(curr_pos);

    rec(curr_pos);
    cout << ice.size() << endl;
    return 0;
}
