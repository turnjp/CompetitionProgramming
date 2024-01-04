#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n, m;
    cin >> n >> m;
    int prev_i;
    for(int i = 0; i < n; i++) {

        int curr_i;
        cin >> curr_i;
        if(i > 0 && curr_i != prev_i + 7) {
            cout << "No" << endl;
            return 0;
        }
        int div = (curr_i - 1) / 7;
        int prev = curr_i;
        for(int j = 1; j < m; j++) {
            int curr;
            cin >> curr;
            if(curr != prev + 1 || (curr - 1) / 7 != div) {
                cout << "No" << endl;
                return 0;
            }
            prev = curr;
        }
        prev_i = curr_i;
    }

    cout << "Yes" << endl;
    return 0;
}
