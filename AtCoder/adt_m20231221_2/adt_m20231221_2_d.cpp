#include <bits/stdc++.h>

using namespace std;

/* bool in_mass(int x, int y, int w, int h) {
    return x >= 0 && y >= 0 && x < w && y < h;
} */

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n;
    string s;
    cin >> n >> s;

    for(int i = 0; i < n - 1; i++) {
        bool flag = true;
        int j = 0;
        for(; j + (i + 1) < n; j++) {
            if(s[j] == s[j + (i + 1)]) {
                cout << j << endl;
                flag = false;
                break;
            }
        }
        if(flag) {
            cout << j << endl;
        }
    }

    return 0;
}
