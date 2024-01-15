// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    int n;
    cin >> n;
    vector<int> x(5 * n);
    for(auto &t : x) {
        cin >> t;
    }
    sort(x.begin(), x.end());

    for(int i = 0; i < n; i++) {
        x.erase(x.begin());
    }

    for(int i = 0; i < n; i++) {
        x.erase(x.end() - 1);
    }

    cout << fixed << setprecision(15)
         << accumulate(x.begin(), x.end(), 0) / (double)x.size() << endl;

    return 0;
}
