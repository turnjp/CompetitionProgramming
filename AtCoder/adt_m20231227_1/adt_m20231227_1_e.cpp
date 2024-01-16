#include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
using namespace atcoder;

int main() {
    int n, m;
    cin >> n >> m;

    dsu d(n);
    for(int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u -= 1;
        v -= 1;
        d.merge(u, v);
    }

    cout << d.groups().size() << endl;

    return 0;
}
