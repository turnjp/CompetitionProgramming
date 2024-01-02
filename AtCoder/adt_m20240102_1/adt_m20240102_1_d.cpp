#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int calc(int a, int b) { return 4 * a * b + 3 * a + 3 * b; }

int main() {
    int h, w;
    cin >> h >> w;
    vector<int> box_num(w, 0);

    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            char tmp;
            cin >> tmp;
            if(tmp == '#') {
                box_num[j]++;
            }
        }
    }

    for(int i = 0; i < w; i++) {
        cout << box_num[i] << ((i < w - 1) ? " " : "\n");
    }

    return 0;
}
