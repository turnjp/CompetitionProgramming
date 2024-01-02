#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int calc(int a, int b) { return 4 * a * b + 3 * a + 3 * b; }

int main() {
    int n;
    cin >> n;
    vector<int> xv(n);
    vector<int> yv(n);

    for(int i = 0; i < n; i++) {
        cin >> xv[i] >> yv[i];
    }

    double max_length = -1;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            max_length = max(max_length, sqrt(pow(xv[i] - xv[j], 2) +
                                              pow(yv[i] - yv[j], 2)));
        }
    }

    cout << fixed << setprecision(15) << max_length << endl;

    return 0;
}
