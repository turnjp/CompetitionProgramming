#include <bits/stdc++.h>

using namespace std;

bool in_mass(int x, int y, int w, int h) {
    return x >= 0 && y >= 0 && x < w && y < h;
}
const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n;

    cin >> n;

    vector<int> v(100, 0);

    // 1 * 3
    v[0] = 3;
    int cnt;
    int max_i;
    cnt   = 1;
    max_i = 1;

    int i = 0;
    while(cnt < n) {
        if(v[i] > 0) {
            int tmp = v[i];

            v[i] = 0;
            v[i + 1]++;
            v[0]  = tmp - 1;
            max_i = max(max_i, i + 1);

            cnt++;
            i = 0;

        } else {
            i++;
        }
    }

    long long sum = 0;
    long long add = 1;
    for(int i = 0; i <= max_i; i++) {
        sum += add * v[i];
        add = add * 10 + 1;
    }
    cout << sum << endl;

    return 0;
}
