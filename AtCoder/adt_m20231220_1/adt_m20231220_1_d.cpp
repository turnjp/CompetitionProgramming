#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

bool mistake_easy(int h, int m) {
    int a, b, c, d;
    a = h / 10;
    b = h % 10;
    c = m / 10;
    d = m % 10;

    int mh, mm;
    mh = a * 10 + c;
    mm = b * 10 + d;

    return 0 <= mh && mh <= 23 && 0 <= mm && mm <= 59;
}

int main() {
    int h, m;
    cin >> h >> m;

    while(!mistake_easy(h, m)) {
        m++;
        if(m >= 60) {
            h++;
            m = 0;
        }
        if(h >= 24) {
            h = 0;
        }
    }

    cout << h << " " << m << endl;

    return 0;
}
