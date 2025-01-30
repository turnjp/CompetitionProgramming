#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m, h, k;
    cin >> n >> m >> h >> k;

    string s;
    cin >> s;

    set<pair<int, int>> iset;
    for(int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        iset.insert({x, y});
    }

    int cx, cy;
    cx = cy = 0;
    for(int i = 0; i < n; i++) {
        switch(s[i]) {
        case 'R':
            cx++;
            break;
        case 'L':
            cx--;
            break;
        case 'U':
            cy++;
            break;
        case 'D':
            cy--;
            break;
        default:
            break;
        }
        h--;
        if(h < 0) {
            cout << "No" << endl;
            return 0;
        }

        if(iset.find({cx, cy}) != iset.end() && h < k) {
            h = k;
            iset.erase(iset.find({cx, cy}));
        }
    }

    cout << "Yes" << endl;

    return 0;
}
