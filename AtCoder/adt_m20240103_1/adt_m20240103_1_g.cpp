#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

vector<vector<int>> graph(9);
map<vector<int>, int> done_map;

bool success(vector<int> pv) {
    vector<int> suc_v{0, 1, 2, 3, 4, 5, 6, 7, -1};
    return pv == suc_v;
}

int rec(int depth, vector<int> pv, int empty_p) {
    done_map[pv] = depth;

    if(success(pv)) {
        return depth;
    }

    int min_depth = INT_MAX;
    for(auto &next_p : graph[empty_p]) {
        // swap
        int tmp;
        tmp = pv[next_p];
        pv[next_p] = pv[empty_p];
        pv[empty_p] = tmp;

        if(done_map.find(pv) == done_map.end() || done_map[pv] > depth + 1) {
            min_depth = min(min_depth, rec(depth + 1, pv, next_p));
        }

        tmp = pv[next_p];
        pv[next_p] = pv[empty_p];
        pv[empty_p] = tmp;
    }

    return min_depth;
}

int main() {
    int m;
    cin >> m;
    vector<int> pv(9, -1);
    int empty_p;

    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u -= 1;
        v -= 1;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    for(int i = 0; i < 8; i++) {
        int p;
        cin >> p;
        p -= 1;
        pv[p] = i; // 頂点pにコマiが置かれている
    }
    for(int i = 0; i < 9; i++) {
        if(pv[i] == -1) {
            empty_p = i;
            break;
        }
    }

    int result = rec(0, pv, empty_p);
    if(result != INT_MAX) {
        cout << result << endl;
    } else {
        cout << -1 << endl;
    }

    return 0;
}
