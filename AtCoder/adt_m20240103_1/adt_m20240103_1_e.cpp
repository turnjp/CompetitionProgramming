#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool in_str = false;
    for(int i = 0; i < n; i++) {
        switch(s[i]) {
        case '\"':
            in_str = !in_str;
            break;
        case ',':
            if(!in_str) {
                s[i] = '.';
            }
            break;
        default:
            break;
        }
    }

    cout << s << endl;

    return 0;
}
