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

    cout << fixed << setprecision(15)
         << accumulate(x.begin() + n, x.end() - n, 0) /
                ((double)x.size() * 3 / 5)
         << endl;

    return 0;
}