#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n, x;
    cin >> n >> x;
    vector<int> av(n);

    for(auto &a : av) {
        cin >> a;
    }
    sort(av.begin(), av.end());

    for(auto &aj : av) {
        int ai = x + aj;
        if(binary_search(av.begin(), av.end(), ai)) {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}
