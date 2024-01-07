#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    long long n, m, t;
    cin >> n >> m >> t;

    vector<long long> av(n - 1);
    for(auto &a : av) {
        cin >> a;
    }
    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        x -= 1;
        av[x] -= y;
    }
    for(auto &a : av) {
        t -= a;
        if(t <= 0) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
    return 0;
}
