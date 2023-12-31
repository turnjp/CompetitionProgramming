#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n;
    cin >> n;

    vector<int> pv(n, -1);
    for(int i = 1; i < n; i++) {
        cin >> pv[i];
        pv[i] -= 1;
    }

    int p = pv[n - 1];
    int cnt = 1;
    while(p != 0) {
        p = pv[p];
        cnt++;
    }

    cout << cnt << endl;

    return 0;
}
