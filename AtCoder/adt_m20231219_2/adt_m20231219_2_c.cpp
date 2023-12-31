#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int a, b, c, d;
    a = INT_MAX;
    b = -1;
    c = INT_MAX;
    d = -1;

    for(int i = 0; i < 10; i++) {
        string s;
        cin >> s;
        for(int j = 0; j < 10; j++) {
            if(s[j] == '#') {
                a = min(a, i);
                b = max(b, i);
                c = min(c, j);
                d = max(d, j);
            }
        }
    }

    cout << a + 1 << " " << b + 1 << endl;
    cout << c + 1 << " " << d + 1 << endl;
    return 0;
}
