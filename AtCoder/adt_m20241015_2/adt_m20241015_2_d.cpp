#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<string> s(3);

    for(string &str : s) {
        cin >> str;
    }

    string t;
    cin >> t;

    string result = "";
    for(char ch : t) {
        int idx = ch - '0' - 1;
        result += s[idx];
    }

    cout << result << endl;

    return 0;
}
