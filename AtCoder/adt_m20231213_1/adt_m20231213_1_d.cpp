#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    string s;
    cin >> s;

    int max_length = -1;
    for(int i = 0; i < s.length(); i++) {
        /// 長さ奇数の回文
        int j = 1;
        for(; 0 <= i - j && i + j < s.length(); j++) {
            if(s[i - j] != s[i + j]) {
                break;
            }
        }
        max_length = max(max_length, 1 + (j - 1) * 2);

        /// 長さ偶数の回文
        j = 0;
        for(; 0 <= i - j && i + (j + 1) < s.length(); j++) {
            if(s[i - j] != s[i + (j + 1)]) {
                break;
            }
        }
        max_length = max(max_length, j * 2);
    }
    cout << max_length << endl;
}
