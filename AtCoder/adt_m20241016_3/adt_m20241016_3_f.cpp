#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    map<int, int> cnt_map;
    vector<pair<int, int>> ps;

    for(int i = 0; i < n * 3; i++) {
        int a;
        cin >> a;
        cnt_map[a]++;
        if(cnt_map[a] == 2) {
            ps.push_back(make_pair(i + 1, a));
        }
    }
    sort(ps.begin(), ps.end());
    for(int i = 0; i < n; i++) {
        cout << ps[i].second;
        if(i < n - 1) {
            cout << " ";
        }
    }
    cout << endl;

    return 0;
}
