// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<long long> blue_cnt(n + 1, 0);
    vector<long long> red_cnt(n + 1, 0);
    blue_cnt[1] = 1;
    red_cnt[1] = 0;

    for(int lv = 2; lv <= n; lv++) {
        blue_cnt[lv] = red_cnt[lv - 1] + blue_cnt[lv - 1] * y;
        red_cnt[lv] = red_cnt[lv - 1] + blue_cnt[lv] * x;
    }

    cout << red_cnt[n] << endl;

    return 0;
}
