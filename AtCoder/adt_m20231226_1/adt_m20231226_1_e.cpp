// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    int n;
    cin >> n;

    map<int, int> cnt_map;
    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        cnt_map[a]++;
    }

    int ans = 0;
    for(auto [a, cnt] : cnt_map) {
        ans += cnt / 2;
    }
    cout << ans << endl;

    return 0;
}
