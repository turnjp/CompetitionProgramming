#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

long long calc(long long x, long long y) { return pow(2, x) * pow(3, y); }

int main() {
    long long n;

    cin >> n;

    for(int x = 0; calc(x, 0) <= n; x++) {
        for(int y = 0; calc(x, y) <= n; y++) {
            if(n == calc(x, y)) {
                cout << "Yes" << endl;
                return 0;
            }
        }
    }

    cout << "No" << endl;
    return 0;
}
