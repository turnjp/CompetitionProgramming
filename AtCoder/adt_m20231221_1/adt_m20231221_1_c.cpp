#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n;
    cin >> n;

    int sum = 0;
    for(int i = 0; i < n; i++) {
        int s;
        cin >> s;
        cout << s - sum << ((i < n - 1) ? " " : "\n");
        sum = s;
    }

    return 0;
}
