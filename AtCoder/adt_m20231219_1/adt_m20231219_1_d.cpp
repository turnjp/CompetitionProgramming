#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

bool isLargeAlphabet(char ch) { return 'A' <= ch && ch <= 'Z'; }

int main() {
    int r, c;
    cin >> r >> c;

    vector<string> s(r);
    for(int i = 0; i < r; i++) {
        cin >> s[i];
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if(s[i][j] == '#') {
                for(int k = 0; k < r; k++) {
                    for(int l = 0; l < c; l++) {
                        if('1' <= s[k][l] && s[k][l] <= '9') {
                            int bomb = s[k][l] - '0';
                            if((abs(i - k) + abs(j - l)) <= bomb) {
                                s[i][j] = '.';
                            }
                        }
                    }
                }
            }
        }
    }

    for(int i = 0; i < r; i++) {
        for(int j = 0; j < c; j++) {
            if('1' <= s[i][j] && s[i][j] <= '9') {
                s[i][j] = '.';
            }
        }
    }
    for(int i = 0; i < r; i++) {
        cout << s[i] << endl;
    }

    return 0;
}
