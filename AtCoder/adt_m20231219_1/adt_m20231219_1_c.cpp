#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

bool isLargeAlphabet(char ch) { return 'A' <= ch && ch <= 'Z'; }

int main() {
    string s;
    cin >> s;

    bool flag = true;
    if(s.length() == 8 && isLargeAlphabet(s[0]) && '1' <= s[1] && s[1] <= '9') {
        for(int i = 2; i <= 6; i++) {
            if(!('0' <= s[i] && s[i] <= '9')) {
                flag = false;
                break;
            }
        }
        if(!isLargeAlphabet(s[7])) {
            flag = false;
        }

    } else {
        flag = false;
    }

    cout << ((flag) ? "Yes" : "No") << endl;

    return 0;
}
