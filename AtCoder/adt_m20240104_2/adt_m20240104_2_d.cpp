#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n;
    cin >> n;
    vector<string> asv(n);
    for(auto &as : asv) {
        cin >> as;
    }
    vector<int> xv(4 * n - 4);
    int x = 0;
    for(int i = 0; i < xv.size(); i++) {
        xv[i] = x;
        // next
        if(i < n - 1) {
            x += 1;
        } else if(i < 2 * n - 2) {
        } else if(i < 3 * n - 3) {
            x -= 1;
        }
    }

    vector<int> yv(4 * n - 4);
    int y = 0;
    for(int i = 0; i < yv.size(); i++) {
        yv[i] = y;
        // next
        if(i < n - 1) {
        } else if(i < 2 * n - 2) {
            y += 1;
        } else if(i < 3 * n - 3) {
        } else {
            y -= 1;
        }
    }
    char last = asv[yv.back()][xv.back()];
    for(int i = xv.size() - 2; i >= 0; i--) {
        asv[yv[i + 1]][xv[i + 1]] = asv[yv[i]][xv[i]];
    }
    asv[0][0] = last;

    for(auto &as : asv) {
        cout << as << endl;
    }

    return 0;
}
