#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    string x;

    cin >> x;

    if(x[0] == x[1] && x[1] == x[2] && x[2] == x[3]) {
        cout << "Weak" << endl;
        return 0;
    }

    bool strong = false;
    for(int i = 0; i < 3; i++) {
        char next_x;
        if(x[i] != '9') {
            next_x = x[i] + 1;
        } else {
            next_x = '0';
        }
        if(x[i + 1] != next_x) {
            strong = true;
        }
    }

    if(strong) {
        cout << "Strong" << endl;
    } else {
        cout << "Weak" << endl;
    }

    return 0;
}
