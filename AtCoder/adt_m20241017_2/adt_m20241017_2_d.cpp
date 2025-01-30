#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string> ss(n);
    for(string &s : ss) {
        cin >> s;
    }
    vector<pair<int, int>> ps;
    for(int i = 0; i < n; i++) {
        int win_cnt = 0;
        for(int j = 0; j < n; j++) {
            switch(ss[i][j]) {
            case '-':
            case 'x':
                break;
            case 'o':
                win_cnt++;
                break;
            default:
                break;
            }
        }
        ps.push_back(make_pair(win_cnt, -i));
    }
    sort(ps.rbegin(), ps.rend());

    for(int i = 0; i < n; i++) {
        cout << -ps[i].second + 1;
        if(i < n - 1) {
            cout << " ";
        } else {
            cout << endl;
        }
    }

    return 0;
}
