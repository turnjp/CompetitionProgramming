#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int m;
    vector<int> dv;

    cin >> m;

    int sum = 0;
    for(int i = 0; i < m; i++) {
        int d;
        cin >> d;
        dv.push_back(d);
        sum += d;
    }

    int medium = sum / 2;

    for(int i = 0; i < (int)dv.size(); i++) {
        if(medium < dv[i]) {
            cout << i + 1 << " " << medium + 1 << endl;
            return 0;
        }
        medium -= dv[i];
    }

    return 0;
}
