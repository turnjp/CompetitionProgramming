#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;
    map<int, int> min_map;

    for(int i = 0; i < n; i++) {
        int a, c;
        cin >> a >> c;

        if(min_map.count(c)) {
            min_map[c] = min(min_map[c], a);
        } else {
            min_map[c] = a;
        }
    }

    int maxv;
    for(auto p : min_map) {
        maxv = max(maxv, p.second);
    }

    cout << maxv << endl;

    return 0;
}
