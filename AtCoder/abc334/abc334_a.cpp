#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int b, g;
    cin >> b >> g;

    if(b > g) {
        cout << "Bat" << endl;
    } else {
        cout << "Glove" << endl;
    }

    return 0;
}
