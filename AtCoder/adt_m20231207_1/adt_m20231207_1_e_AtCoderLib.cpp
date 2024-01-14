#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

int main() {
    int n, m;

    cin >> n >> m;
    dsu d(n);
    vector<int> edge_n(n);

    // 辺が頂点に対して一つ少ないか
    if(n - m != 1) {
        cout << "No" << endl;
        return 0;
    }

    // 辺を読み込む
    for(int i = 0; i < m; i++) {
        int u, v;

        cin >> u >> v;
        u -= 1;
        v -= 1;
        d.merge(u, v);
        edge_n[u]++;
        edge_n[v]++;
    }

    // ３辺以上接続された点が存在しないか
    for(int i = 0; i < n; i++) {
        if(edge_n[i] > 2) {
            cout << "No" << endl;
            return 0;
        }
    }

    // 全て一つに連結されているか
    if(d.groups().size() > 1) {
        cout << "No" << endl;
        return 0;
    }

    cout << "Yes" << endl;

    return 0;
}
