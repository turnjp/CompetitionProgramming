#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n, q;
    cin >> n >> q;

    map<int, pair<int, int>> m;

    for(int i = 0; i < n; i++) {
        m[-i] = {i + 1, 0};
    }

    int cnt = 0;
    for(int i = 0; i < q; i++) {
        int q1;
        cin >> q1;
        if(q1 == 1) {
            char q2;
            cin >> q2;
            pair<int, int> curr_head = m[cnt];
            cnt += 1;
            switch(q2) {
            case 'R':
                m[cnt] = {curr_head.first + 1, curr_head.second};
                break;
            case 'L':
                m[cnt] = {curr_head.first - 1, curr_head.second};
                break;
            case 'U':
                m[cnt] = {curr_head.first, curr_head.second + 1};
                break;
            case 'D':
                m[cnt] = {curr_head.first, curr_head.second - 1};
                break;
            default:
                break;
            }
        } else if(q1 == 2) {
            int q2;
            cin >> q2;
            q2 -= 1;
            cout << m[cnt - q2].first << " " << m[cnt - q2].second << endl;
        }
    }

    return 0;
}
