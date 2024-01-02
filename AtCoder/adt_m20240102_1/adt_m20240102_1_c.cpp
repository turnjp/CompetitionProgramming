#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int calc(int a, int b) { return 4 * a * b + 3 * a + 3 * b; }

int main() {
    int n;
    cin >> n;
    vector<int> sv(n);

    for(int i = 0; i < n; i++) {
        cin >> sv[i];
    }

    sort(sv.begin(), sv.end());

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        bool flag = true;
        for(int a = 1; calc(a, 1) <= sv[i] && flag; a++) {
            for(int b = 1; calc(a, b) <= sv[i] && flag; b++) {
                if(calc(a, b) == sv[i]) {
                    flag = false;
                }
            }
        }
        if(flag) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
