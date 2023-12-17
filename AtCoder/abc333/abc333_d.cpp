#include <bits/stdc++.h>

using namespace std;

bool in_mass(int x, int y, int w, int h) {
    return x >= 0 && y >= 0 && x < w && y < h;
}
const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int rec(int cnt, vector<int> lv, int t, vector<vector<int>> graph) {

    int l = lv[t];
    if(l == 1) {
        return cnt;
    }
    lv.erase(lv.begin() + t);
    for(const int p : graph[l]) {
        graph[p].erase(find(graph[p].begin(), graph[p].end(), l));
    }
    graph.erase(graph.begin() + l);

    int min_cnt = INT_MAX;

    for(int i = 0; i < lv.size(); i++) {
        min_cnt = min(min_cnt, rec(cnt + 1, lv, i, graph));
    }

    return min_cnt;
}

int main() {
    int n;

    cin >> n;

    vector<vector<int>> graph(n + 1);

    for(int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    vector<int> lv;

    for(int i = 0; i < graph.size(); i++) {
        if(graph[i].size() == 1) {
            lv.push_back(i);
        }
    }

    int min_cnt = INT_MAX;
    for(int i = 0; i < lv.size(); i++) {
        min_cnt = min(min_cnt, rec(1, lv, i, graph));
    }

    cout << min_cnt << endl;

    return 0;
}
