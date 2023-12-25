#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> av(n);
    vector<int> bv(m);

    for(int i = 0; i < n; i++) {
        cin >> av[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> bv[i];
    }

    sort(av.rbegin(), av.rend());
    sort(bv.rbegin(), bv.rend());

    int i = 0;
    int j = 0;
    int x;
    int min_money = INT_MAX;
    for(; i < n; i++) {
        x = av[i];
        while(x <= bv[j]) {
            j++;
        }
        if((n - i) >= j) {
            if(j == 0) {
                x = bv[0] + 1;
            }
            min_money = min(min_money, x);
        } else {
            break;
        }
    }

    cout << min_money << endl;

    return 0;
}
