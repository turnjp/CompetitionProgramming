// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    string s;
    cin >> s;
    char m_ch = s[0];

    bool succ = true;
    for(auto &ch : s) {
        if(ch != m_ch) {
            if(ch != m_ch + 1 && ch != m_ch + 2) {
                succ = false;
                break;
            } else {
                m_ch = ch;
            }
        }
    }
    if(succ) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
