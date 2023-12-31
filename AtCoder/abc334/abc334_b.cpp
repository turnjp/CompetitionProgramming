#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    long long a, m, l, r;
    cin >> a >> m >> l >> r;
    l -= a;
    r -= a;

    // 範囲内最も左側のツリー番号：余りを先に引いた上（グラフ上左に移動した上）で割り算。丸められるとR右隣のツリー番号になるため。
    long long rtn = (r - (r % m + m) % m) / m;
    long long ltn = ((l - 1) - ((l - 1) % m + m) % m) / m;

    cout << rtn - ltn << endl;

    return 0;
}
