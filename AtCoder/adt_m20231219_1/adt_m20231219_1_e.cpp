#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

bool isLargeAlphabet(char ch) { return 'A' <= ch && ch <= 'Z'; }

int main() {
    int n;
    cin >> n;
    vector<pair<long long, int>> sfv(n, {0, 0});

    for(int i = 0; i < n; i++) {
        cin >> sfv[i].second >> sfv[i].first;
    }
    sort(sfv.rbegin(), sfv.rend());

    if(sfv[0].second != sfv[1].second) {
        cout << sfv[0].first + sfv[1].first << endl;
    } else {
        long long max_m = sfv[0].first + (sfv[1].first / 2);
        for(int i = 2; i < n; i++) {
            if(sfv[0].second != sfv[i].second) {
                max_m = max(max_m, sfv[0].first + sfv[i].first);
                break;
            }
        }
        cout << max_m << endl;
    }

    return 0;
}
