#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;
    vector<string> ss(n);

    for(string &s : ss) {
        cin >> s;
    }

    sort(ss.begin(), ss.end());

    regex re(R"([HDCS][A23456789TJQK])");
    for(int i = 0; i < (int)ss.size(); i++) {
        if(i > 0) {
            if(ss[i - 1] == ss[i]) {
                cout << "No" << endl;
                return 0;
            }
        }
        if(!regex_match(ss[i], re)) {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;

    return 0;
}
