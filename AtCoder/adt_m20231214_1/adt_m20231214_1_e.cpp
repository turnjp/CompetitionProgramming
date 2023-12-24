#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n, q;
    cin >> n >> q;

    set<pair<int, int>> fset;

    for(int i = 0; i < q; i++) {
        int t, a, b;
        cin >> t >> a >> b;
        a -= 1;
        b -= 1;
        switch(t) {
        case 1:
            fset.insert({a, b});
            break;
        case 2:
            if(fset.find({a, b}) != fset.end()) {
                fset.erase(fset.find({a, b}));
            }
            break;
        case 3:
            if(fset.find({a, b}) != fset.end() &&
               fset.find({b, a}) != fset.end()) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
            break;
        default:
            break;
        }
    }

    return 0;
}
