// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    int n;
    cin >> n;

    vector<int> c(n);
    vector<set<int>> a(n);

    for(int i = 0; i < n; i++) {
        cin >> c[i];
        for(int j = 0; j < c[i]; j++) {
            int t;
            cin >> t;
            a[i].insert(t);
        }
    }

    int x;
    cin >> x;

    vector<bool> flag(n);
    int min_cnt = INT_MAX;
    for(int i = 0; i < n; i++) {
        if(a[i].find(x) != a[i].end()) {
            flag[i] = true;
            min_cnt = min(min_cnt, c[i]);
        } else {
            flag[i] = false;
        }
    }

    vector<int> ans;
    for(int i = 0; i < n; i++) {
        if(flag[i] && c[i] == min_cnt) {
            ans.push_back(i + 1);
        }
    }

    cout << ans.size() << endl;
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << ((i < ans.size() - 1) ? " " : "");
    }
    cout << endl;

    return 0;
}
