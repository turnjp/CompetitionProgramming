#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n;
    cin >> n;
    vector<vector<char>> av(n, vector<char>(n, '-'));

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> av[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i; j++) {
            int ri = j;
            int rj = i;
            switch(av[i][j]) {
            case 'W':
                if(av[ri][rj] != 'L') {
                    cout << "incorrect" << endl;
                    return 0;
                }
                break;
            case 'L':
                if(av[ri][rj] != 'W') {
                    cout << "incorrect" << endl;
                    return 0;
                }
                break;
            case 'D':
                if(av[ri][rj] != 'D') {
                    cout << "incorrect" << endl;
                    return 0;
                }
                break;

            default:
                break;
            }
        }
    }

    cout << "correct" << endl;

    return 0;
}
