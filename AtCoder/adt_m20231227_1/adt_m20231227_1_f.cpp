// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    int n;
    cin >> n;
    vector<long long> x(n);
    vector<long long> y(n);

    for(int i = 0; i < n; i++) {
        cin >> x[i] >> y[i];
    }

    set<set<pair<int, int>>> ans;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            for(int k = j + 1; k < n; k++) {
                long long x_diff = x[i] - x[j];
                long long y_diff = y[i] - y[j];

                double inc;
                double inte;

                bool flag = false;
                if(x_diff != 0) {
                    inc = (double)y_diff / x_diff;
                    inte = y[i] - x[i] * inc;
                    if((double)y[k] != inc * x[k] + inte) {
                        flag = true;
                    }
                } else {
                    if(x[i] != x[k]) {
                        flag = true;
                    }
                }
                if(flag) {
                    set<pair<int, int>> tmp_set;
                    tmp_set.insert({x[i], y[i]});
                    tmp_set.insert({x[j], y[j]});
                    tmp_set.insert({x[k], y[k]});
                    ans.insert(tmp_set);
                }
            }
        }
    }

    cout << ans.size() << endl;

    return 0;
}
