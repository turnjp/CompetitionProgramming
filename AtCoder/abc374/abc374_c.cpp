// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    int n;
    cin >> n;

    vector<int> kv(n);
    for(int &k : kv) {
        cin >> k;
    }

    int result = INT_MAX;
    sort(kv.begin(), kv.end());
    do {
        int sum1 = 0;
        int sum2 = 0;

        for(int i = 0; i < (int)kv.size(); i++) {
            if(sum1 < sum2) {
                sum1 += kv[i];
            } else {
                sum2 += kv[i];
            }
        }

        result = min(result, max(sum1, sum2));

    } while(next_permutation(kv.begin(), kv.end()));

    cout << result << endl;

    return 0;
}
