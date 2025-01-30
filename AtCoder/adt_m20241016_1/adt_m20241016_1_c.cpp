#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;
    vector<set<int>> cs(n);

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;

        cs[a].insert(b);
        cs[b].insert(a);
    }

    for(set<int> city : cs) {
        cout << city.size();
        for(int to : city) {
            cout << " " << to + 1;
        }
        cout << endl;
    }

    return 0;
}
