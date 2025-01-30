#include <bits/stdc++.h>

using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    pair<int, int> ps[2];
    int cnt = 0;
    for(int i = 0; i < h; i++) {
        for(int j = 0; j < w; j++) {
            char ch;
            cin >> ch;
            if(ch == 'o') {
                ps[cnt] = make_pair(i, j);
                cnt++;
            }
        }
    }

    int diff =
        abs(ps[0].first - ps[1].first) + abs(ps[0].second - ps[1].second);
    cout << diff << endl;

    return 0;
}
