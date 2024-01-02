#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n;
    cin >> n;
    vector<int> tv(n);
    vector<bool> lv(n, false);
    vector<queue<int>> qv(n);

    for(int i = 0; i < n; i++) {
        cin >> tv[i];

        int k;
        cin >> k;
        for(int j = 0; j < k; j++) {
            int tmp;
            cin >> tmp;
            tmp -= 1;
            qv[i].push(tmp);
        }
    }
    long long result = 0;
    queue<int> lq;
    lq.push(n - 1);
    while(lq.size() > 0) {
        int l = lq.front();
        lq.pop();

        // 習得済み
        if(lv[l]) {
            continue;
        }

        //
        while(!qv[l].empty()) {
            int fr = qv[l].front();
            lq.push(fr);
            qv[l].pop();
        }

        result += tv[l];
        lv[l] = true;
    }

    cout << result << endl;

    return 0;
}
