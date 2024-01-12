#include <bits/stdc++.h>

using namespace std;

bool in_mass(int x, int y, int w, int h) {
    return x >= 0 && y >= 0 && x < w && y < h;
}

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int h, w;
    cin >> h >> w;

    vector<vector<int>> mass(h, vector<int>(w));
    for(auto &row : mass) {
        for(auto &a : row) {
            cin >> a;
        }
    }
    queue<pair<pair<int, int>, set<int>>> q;
    set<int> s;
    s.insert(mass[0][0]);
    q.push({{0, 0}, s});

    int cnt = 0;
    while(q.size() > 0) {
        auto curr = q.front();
        q.pop();
        if(curr.first.first == h - 1 && curr.first.second == w - 1) {
            cnt++;
            continue;
        }

        int y = curr.first.first + 1;
        int x = curr.first.second;
        if(in_mass(x, y, w, h) &&
           curr.second.find(mass[y][x]) == curr.second.end()) {
            auto next_set = set<int>(curr.second);
            next_set.insert(mass[y][x]);
            q.push({{y, x}, next_set});
        }

        y = curr.first.first;
        x = curr.first.second + 1;
        if(in_mass(x, y, w, h) &&
           curr.second.find(mass[y][x]) == curr.second.end()) {
            auto next_set = set<int>(curr.second);
            next_set.insert(mass[y][x]);
            q.push({{y, x}, next_set});
        }
    }

    cout << cnt << endl;

    return 0;
}
