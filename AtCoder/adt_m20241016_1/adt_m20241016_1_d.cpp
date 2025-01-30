#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;
    set<pair<int, int>> bads;

    for(int i = 1; i <= n; i++) {
        for(int j = i + 1; j <= n; j++) {
            bads.insert(make_pair(i, j));
        }
    }

    for(int i = 0; i < m; i++) {
        int prev;
        for(int j = 0; j < n; j++) {
            int curr;
            cin >> curr;
            if(j > 0) {
                if(prev < curr) {
                    bads.erase(make_pair(prev, curr));
                } else {
                    bads.erase(make_pair(curr, prev));
                }
            }
            prev = curr;
        }
    }

    cout << bads.size() << endl;

    return 0;
}
