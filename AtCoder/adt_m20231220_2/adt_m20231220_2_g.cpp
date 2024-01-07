#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    long long a, b;
    cin >> a >> b;

    long double prev = LDBL_MAX;
    for(long long i = 0; true; i++) {
        long double curr = (a / sqrtl(1 + i)) + b * i;
        if(prev <= curr) {
            cout << fixed << setprecision(15) << prev << endl;
            break;
        }
        prev = curr;
    }
    return 0;
}
