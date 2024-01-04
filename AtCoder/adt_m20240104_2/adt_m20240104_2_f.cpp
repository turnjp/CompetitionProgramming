#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n, m;
    cin >> n >> m;
    set<pair<int, int>> ab_set;
    set<pair<int, int>> cd_set;

    for(int i = 0; i < m; i++) {
        int first, second;
        cin >> first >> second;
        first -= 1;
        second -= 1;
        ab_set.insert({first, second});
    }

    for(int i = 0; i < m; i++) {
        int first, second;
        cin >> first >> second;
        first -= 1;
        second -= 1;
        cd_set.insert({first, second});
    }

    vector<int> pv(n);
    for(int i = 0; i < n; i++) {
        pv[i] = i;
    }

    do {
        bool flag = true;
        for(auto &ab : ab_set) {
            int first = pv[ab.first];
            int second = pv[ab.second];
            if(first > second) {
                int tmp = first;
                first = second;
                second = tmp;
            }

            // 同じ辺が存在しない時
            if(cd_set.find({first, second}) == cd_set.end()) {
                flag = false;
                break;
            }
        }
        if(flag) {
            cout << "Yes" << endl;
            return 0;
        }

    } while(next_permutation(pv.begin(), pv.end()));

    cout << "No" << endl;
    return 0;
}
