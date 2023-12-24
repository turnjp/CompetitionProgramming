#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    long long n;
    cin >> n;
    if(n <= pow(10, 3) - 1) {
        cout << n << endl;
    } else {
        for(int i = 1; i <= 6; i++) {
            if(pow(10, i + 2) <= n && n <= pow(10, i + 3) - 1) {
                long long result = n / pow(10, i);
                result *= pow(10, i);
                cout << result << endl;
            }
        }
    }

    return 0;
}
