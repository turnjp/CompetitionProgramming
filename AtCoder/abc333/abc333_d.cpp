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

    vector<set<int>> tree(n);

    for(int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        u -= 1;
        v -= 1;
        tree[u].insert(v);
        tree[v].insert(u);
    }

    int result;
    if(tree[0].size() == 1) { // 1自体が葉の場合
        result = 1;
    } else { // 1が枝の場合
        ////頂点1より下の部分木のノード数の配列
        vector<int> size_v;

        // 頂点1より下の部分木のノード数を求める
        for(auto one_next : tree[0]) {
            queue<pair<int, int>> q;

            int cnt = 0;
            q.push({one_next, 0});

            do {
                int curr = q.front().first;
                int parent = q.front().second;
                q.pop();
                cnt++;

                // 葉でない（＝枝）
                if(tree[curr].size() > 1) {
                    for(auto next : tree[curr]) {
                        if(next != parent) {
                            q.push({next, curr});
                        }
                    }
                }

            } while(q.size() > 0);
            size_v.push_back(cnt);
        }
        // 昇順
        sort(size_v.begin(), size_v.end());

        // 最大値以外を合算し、頂点１の分を足す
        result = reduce(size_v.begin(), size_v.end() - 1) + 1;
    }

    cout << result << endl;

    return 0;
}
