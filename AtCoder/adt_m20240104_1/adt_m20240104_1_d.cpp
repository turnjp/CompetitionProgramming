#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

long long conv(long long x, int k) {

    long long result = 0;
    long long mul = 1;
    while(x > 0) {
        result += x % 10 * mul;
        x /= 10;
        mul *= k;
    }
    return result;
}

int main() {
    int k;
    long long a, b;
    cin >> k >> a >> b;

    cout << conv(a, k) * conv(b, k) << endl;
    return 0;
}
