#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

bool success(vector<int> pv) {
    vector<int> suc_v{0, 1, 2, 3, 4, 5, 6, 7, 8};
    return pv == suc_v;
}

int main() {
    int m;
    cin >> m;
    vector<vector<int>> graph(9);
    set<vector<int>> done_set;
    vector<int> pv(9, -1); // コマjがどの頂点にあるか。コマ8は空を表す

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u -= 1;
        v -= 1;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<bool> fv(9, true);
    for(int i = 0; i < 8; i++) {
        int p;
        cin >> p;
        p -= 1;
        pv[i] = p; // コマiは頂点pに置かれている
        fv[p] = false;
    }

    // コマ8（空）はどこか
    for(int i = 0; i < 9; i++) {
        if(fv[i]) {
            pv[8] = i;
            break;
        }
    }

    queue<pair<vector<int>, int>> q;
    pair<vector<int>, int> next = {pv, 0};
    while(!success(next.first)) {
        for(auto add : graph[next.first[8]]) {
            int tmp;
            tmp = next.first[add];
            next.first[add] = next.first[8];
            next.first[8] = tmp;
            if(done_set.find(next.first) == done_set.end()) {
                q.push({next.first, next.second + 1});
                done_set.insert(next.first);
            }
            tmp = next.first[add];
            next.first[add] = next.first[8];
            next.first[8] = tmp;
        }

        if(q.empty()) {
            cout << -1 << endl;
            return 0;
        }

        next = q.front();
        q.pop();
    }
    cout << next.second << endl;

    return 0;
}
