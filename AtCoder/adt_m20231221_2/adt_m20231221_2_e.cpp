#include <bits/stdc++.h>

using namespace std;

/* bool in_mass(int x, int y, int w, int h) {
    return x >= 0 && y >= 0 && x < w && y < h;
} */

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n;
    cin >> n;

    vector<int> av(n);
    vector<int> bv(n);

    for(int i = 0; i < n; i++)
        cin >> av[i] >> bv[i];

    double total_t = 0;
    for(int i = 0; i < n; i++) {
        total_t += (double)av[i] / bv[i];
    }

    double length = 0;
    double center_t = total_t / 2;
    for(int i = 0; i < n; i++) {
        double t = (double)av[i] / bv[i];
        if(center_t - t <= 0) {
            length += bv[i] * center_t;
            break;
        } else {
            length += av[i];
            center_t -= t;
        }
    }

    cout << fixed << setprecision(15) << length << endl;

    return 0;
}
