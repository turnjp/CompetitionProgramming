#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n, q;
    cin >> n >> q;

    map<pair<ll, int>, int> pm;
    map<ll, int> cnt_map;
    for(int i = 1; i <= n; i++) {
        ll a;
        cin >> a;

        cnt_map[a]++;
        pair<ll, int> p = make_pair(a, cnt_map[a]);
        pm[p] = i;
    }

    for(int i = 0; i < q; i++) {
        ll x;
        int k;
        cin >> x >> k;
        pair<ll, int> p = make_pair(x, k);
        if(pm.count(p)) {
            cout << pm[p] << endl;
        } else {
            cout << -1 << endl;
        }
    }

    return 0;
}
