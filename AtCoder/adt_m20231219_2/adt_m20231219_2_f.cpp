#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n, m;
    cin >> n >> m;

    vector<set<int>> graph(n);

    for(int i = 0; i < m; i++) {
        int a, b;
        cin >> a >> b;
        a -= 1;
        b -= 1;
        if(a > b) {
            int tmp = a;
            a = b;
            b = tmp;
        }
    }

    queue<pair<int, int>> q;
    q.push({0, -1});
    vector<bool> reached(n, false);
    int cnt = 0;
    while(true) {
        pair<int, int> curr = q.front();
        q.pop();
    }

    return 0;
}
