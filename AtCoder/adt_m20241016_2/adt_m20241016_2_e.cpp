#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k, t;

    cin >> n >> k >> t;
    vector<long long> ps(n);
    vector<pair<long long, int>> psums(n - t + 1, make_pair(0, 0));
    vector<bool> psumfs(n, true);

    for(long long &p : ps) {
        cin >> p;
    }
    for(int i = 0; i < (int)psums.size(); i++) {
        psums[i].second = i;
        for(int j = 0; j < t; j++) {
            psums[i].first += ps[i + j];
        }
    }
    sort(psums.begin(), psums.end());

    int cnt = 0;
    long long result = 0;
    for(int i = 0; i < (int)psums.size(); i++) {
        if(cnt >= k) {
            break;
        }
        if(psumfs[psums[i].second]) {
            result += psums[i].first;
            cnt++;
            for(int j = 0; j < t; j++) {
                psumfs[psums[i].second + j] = false;
                if(psums[i].second - j >= 0) {
                    psumfs[psums[i].second - j] = false;
                }
            }
        }
    }

    cout << result << endl;

    return 0;
}
