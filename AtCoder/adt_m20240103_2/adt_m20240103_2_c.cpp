#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n;
    cin >> n;
    vector<vector<int>> graph(n);

    for(int i = 0; i < n - 1; i++) {
        int a, b;
        cin >> a >> b;
        a -= 1;
        b -= 1;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(graph[i].size() == n - 1) {
            cnt++;
        } else if(graph[i].size() != 1) {
            cout << "No" << endl;
            return 0;
        }
    }
    if(cnt == 1) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
