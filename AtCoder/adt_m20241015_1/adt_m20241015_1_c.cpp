#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    string max_s, min_s;

    max_s = s;
    min_s = s;

    for(int i = 1; i < (int)s.length(); i++) {
        string ts = s.substr(i) + s.substr(0, i);
        max_s = max(max_s, ts);
        min_s = min(min_s, ts);
    }

    cout << min_s << endl;
    cout << max_s << endl;

    return 0;
}
