#include <bits/stdc++.h>

using namespace std;

int main() {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    map<pair<int, int>, int> pm;

    int dx[] = {-2, -1, 1, 2, 2, 1, -1, -2};
    int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};

    for(int i = 0; i < 8; i++) {
        pm[make_pair(x1 + dx[i], y1 + dy[i])]++;
        pm[make_pair(x2 + dx[i], y2 + dy[i])]++;
    }

    for(pair<pair<int, int>, int> pp : pm) {
        if(pp.second >= 2) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;

    return 0;
}
