#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

long double f(long long a, long long b, long long x) {
    return a / sqrtl(1 + x) + (long double)b * x;
}

int main() {
    long long a, b;
    cin >> a >> b;

    long long l = 0;
    long long r = a / b;

    while(r - l > 2) { // 距離dが2の時点でl,rが変化しなくなる
        long long d = r - l;
        long long x1 = l + d / 3;
        long long x2 = r - d / 3;
        long double r1 = f(a, b, x1);
        long double r2 = f(a, b, x2);

        if(r1 < r2) {
            r = x2;
        } else {
            l = x1;
        }
    }

    long double result = LDBL_MAX;
    for(long long i = l; i <= r; i++) {
        result = min(result, f(a, b, i));
    }

    cout << fixed << setprecision(10) << result << endl;

    return 0;
}
