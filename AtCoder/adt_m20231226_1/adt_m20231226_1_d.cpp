// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> a(n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < i + 1; j++) {
            int tmp_a;
            if(j == 0 || j == i)
                tmp_a = 1;
            else {
                tmp_a = a[i - 1][j - 1] + a[i - 1][j];
            }
            a[i].push_back(tmp_a);
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < a[i].size(); j++) {
            cout << a[i][j] << ((j < a[i].size() - 1) ? " " : "\n");
        }
    }

    return 0;
}
