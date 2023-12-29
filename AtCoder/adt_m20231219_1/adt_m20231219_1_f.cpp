#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    long long n, a, b, p, q, r, s;
    cin >> n >> a >> b >> p >> q >> r >> s;

    long long min_k1, max_k1, min_k2, max_k2;

    min_k1 = max(1 - a, 1 - b);
    max_k1 = min(n - a, n - b);

    min_k2 = max(1 - a, b - n);
    max_k2 = min(n - a, b - 1);

    for(long long i = p; i <= q; i++) {
        for(long long j = r; j <= s; j++) {
            char ch = '.';
            if(a + min_k1 <= i && i <= a + max_k1) {
                long long k = i - a;
                if(j == b + k) {
                    ch = '#';
                }
            }
            if(a + min_k2 <= i && i <= a + max_k2) {
                long long k = i - a;
                if(j == b - k) {
                    ch = '#';
                }
            }
            cout << ch;
        }
        cout << endl;
    }

    return 0;
}
