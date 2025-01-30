#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> as(2 * n);
    vector<pair<int, int>> ks(2 * n);
    for(int i = 0; i < 2 * n; i++) {
        cin >> as[i];
        ks[i] = make_pair(0, 2 * n - i);
    }
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < 2 * n; j += 2) {
            int a = 2 * n - ks[j].second;
            int b = 2 * n - ks[j + 1].second;
            if((as[a][i] == 'G' && as[b][i] == 'C') ||
               (as[a][i] == 'C' && as[b][i] == 'P') ||
               (as[a][i] == 'P' && as[b][i] == 'G')) {
                ks[j].first++;
            } else if((as[b][i] == 'G' && as[a][i] == 'C') ||
                      (as[b][i] == 'C' && as[a][i] == 'P') ||
                      (as[b][i] == 'P' && as[a][i] == 'G')) {
                ks[j + 1].first++;
            }
        }
        sort(ks.rbegin(), ks.rend());
    }
    for(int i = 0; i < 2 * n; i++) {
        cout << 2 * n - ks[i].second + 1 << endl;
    }

    return 0;
}
