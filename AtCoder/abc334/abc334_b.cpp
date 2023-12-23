#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    long long a, m, l, r;
    cin >> a >> m >> l >> r;

    long long t1 = (l - a) / m;
    long long s = t1 * m + a;
    if(s < l) {
        s += m;
    }

    if(s > r) {
        cout << 0 << endl;
        return 0;
    }

    cout << (long long)(abs(s - r) / m) + 1 << endl;

    return 0;
}
