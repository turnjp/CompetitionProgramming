// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    int n, x, y;
    cin >> n >> x >> y;

    vector<long long> blue_cnt(10, 0);
    vector<long long> red_cnt(10, 0);
    red_cnt[n] = 1;

    for(int lv = n; lv > 1; lv--) {
        if(red_cnt[lv] > 0) {
            long long tmp = red_cnt[lv];
            red_cnt[lv] = 0;
            red_cnt[lv - 1] += tmp;
            blue_cnt[lv] += x * tmp;
        }
        if(blue_cnt[lv] > 0) {
            long long tmp = blue_cnt[lv];
            blue_cnt[lv] = 0;
            red_cnt[lv - 1] += tmp;
            blue_cnt[lv - 1] += y * tmp;
        }
    }

    cout << blue_cnt[1] << endl;

    return 0;
}
