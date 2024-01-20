// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int n, x, y;
long long blue_num(int lv, bool is_red) {
    if(lv == 1) {
        return ((is_red) ? 0 : 1);
    }

    if(is_red) {
        return blue_num(lv - 1, true) + blue_num(lv, false) * x;
    } else {
        return blue_num(lv - 1, true) + blue_num(lv - 1, false) * y;
    }
}

int main() {
    cin >> n >> x >> y;

    cout << blue_num(n, true) << endl;

    return 0;
}
