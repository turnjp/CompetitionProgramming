// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    string s;
    cin >> s;
    vector<char> cs;
    for(auto &ch : s) {
        cs.push_back(ch);
    }
    sort(cs.begin(), cs.end());

    for(auto &ch : cs) {
        cout << ch;
    }

    cout << endl;
    return 0;
}
