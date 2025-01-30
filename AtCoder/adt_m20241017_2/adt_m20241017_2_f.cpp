#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> as(n);
    vector<int> bs(m);
    set<int> ab_set;

    for(int &a : as) {
        cin >> a;
        ab_set.insert(a);
    }

    for(int &b : bs) {
        cin >> b;
        ab_set.insert(b + 1);
    }

    sort(as.begin(), as.end());
    sort(bs.begin(), bs.end());
    int ai = 0;
    int bi = 0;
    for(int ab : ab_set) {
        while(ai < n && as[ai] <= ab) {
            ai++;
        }
        while(bi < m && bs[bi] < ab) {
            bi++;
        }
        int buy_cnt = m - bi;
        if(ai >= buy_cnt) {
            cout << ab << endl;
            return 0;
        }
    }

    return 0;
}
