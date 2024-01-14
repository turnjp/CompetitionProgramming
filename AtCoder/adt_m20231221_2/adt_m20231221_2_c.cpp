#include <bits/stdc++.h>

using namespace std;

/* bool in_mass(int x, int y, int w, int h) {
    return x >= 0 && y >= 0 && x < w && y < h;
} */

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    string s;
    cin >> s;

    int b_pos1 = s.find("B");
    int b_pos2 = s.rfind("B");
    int r_pos1 = s.find("R");
    int r_pos2 = s.rfind("R");
    int k_pos = s.rfind("K");

    if(b_pos1 % 2 != b_pos2 % 2 && r_pos1 < k_pos && k_pos < r_pos2) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
