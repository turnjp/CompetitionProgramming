#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n, x, y;
    cin >> n >> x >> y;
    x--;
    y--;
    vector<vector<int>> graph(n);

    for(int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    queue<vector<int>> q;
    vector<bool> reached(n, false);
    vector<int> curr;
    curr.push_back(x);
    int last = curr[curr.size() - 1];
    reached[last] = true;
    do {

        for(int i = 0; i < graph[last].size(); i++) {
            if(!reached[graph[last][i]]) {
                curr.push_back(graph[last][i]);
                q.push(curr);
                reached[graph[last][i]] = true;
                curr.pop_back();
            }
        }

        // next
        curr = q.front();
        last = curr[curr.size() - 1];
        q.pop();
    } while(last != y);

    for(int i = 0; i < curr.size(); i++) {
        cout << curr[i] + 1 << ((i != curr.size() - 1) ? " " : "\n");
    }
    return 0;
}
