#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;

    cin >> n >> m;

    vector<string> s(n), t(m);

    for(string &str : s) {
        cin >> str;
    }

    for(string &str : t) {
        cin >> str;
    }

    int cnt = 0;
    for(string &str : s) {
        string end_str = str.substr(3);
        if(find(t.begin(), t.end(), end_str) != t.end()) {
            cnt++;
        }
    }

    cout << cnt << endl;

    return 0;
}
