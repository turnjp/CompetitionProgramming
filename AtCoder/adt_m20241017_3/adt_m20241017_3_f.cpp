#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> edges(n);
    vector<vector<int>> sides(m);
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;

        edges[u].push_back(i);
        edges[v].push_back(i);
        sides[i].push_back(u);
        sides[i].push_back(v);
    }

    vector<bool> done_sides(m, false);
    vector<bool> done_edges(n, false);
    deque<int> q;
    q.push_back(0);
    done_edges[0] = true;
    int cnt = 0;
    while(!q.empty()) {
        int u = q.front();
        q.pop_front();

        for(int v : edges[u]) {
            if(!done_sides[v]) {
                done_sides[v] = true;

                if(sides[v][0] == u) {
                    q.push_back(sides[v][1]);
                    done_edges[sides[v][1]] = true;
                } else {
                    q.push_back(sides[v][0]);
                    done_edges[sides[v][0]] = true;
                }
            }
        }
        if(q.empty()) {
            cnt++;
            for(int i = 0; i < n; i++) {
                if(!done_edges[i]) {
                    q.push_back(i);
                    done_edges[i] = true;
                    break;
                }
            }
        }
    }
    cout << cnt << endl;

    return 0;
}
