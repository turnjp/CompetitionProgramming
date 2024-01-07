#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

long double f(long long a, long long b, long long n) {
    return a / sqrt(1.0L + n) + (long double)b * n;
}

int main() {
    long long a, b;
    cin >> a >> b;

    // 前提：凸関数（下向きに膨らんだ関数）
    // 微分すると傾きを求める関数になる
    // 結果0の時、傾き0＝下向き凸の頂点
    // nを操作回数とし、結果0の時のn
    long long n = pow((long double)a / (2.0L * b), 2.0L / 3.0L) - 1.0L;

    // 操作回数なのでマイナスはありえない
    if(n < 0) {
        n = 0;
    }

    // f(x)が最小となる操作回数は以下４パターンどれか
    // 切り捨てた値 n
    // 切り上げた値 n+1
    // 傾き0が無い（凸の頂点が無い）操作0回 0 f(0)=a
    long double t = ranges::min({f(a, b, n), f(a, b, n + 1), (long double)a});

    cout << fixed << setprecision(15) << t << endl;

    return 0;
}
