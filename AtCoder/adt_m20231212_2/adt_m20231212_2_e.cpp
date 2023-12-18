#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    string s, t;
    cin >> s >> t;

    for(int i = 0; i < t.length(); i++) {
        if(s[i] != t[i]) {
            if(i >= 2 && s[i - 2] == s[i - 1] && s[i - 1] == t[i]) {
                s.insert(i, string(1, s[i - 1]));
            } else {
                cout << "No" << endl;
                return 0;
            }
        }
    }
    cout << "Yes" << endl;
    return 0;
}
