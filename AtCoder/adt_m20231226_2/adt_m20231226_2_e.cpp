// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    string s, t;
    cin >> s >> t;

    map<char, int> ch_cnt_s;
    map<char, int> ch_cnt_t;
    for(auto &ch : s) {
        ch_cnt_s[ch]++;
    }
    for(auto &ch : t) {
        ch_cnt_t[ch]++;
    }

    bool flag = true;
    string atcoder = "atcoder";
    for(char i = 'a'; i <= 'z'; i++) {
        if(ch_cnt_s[i] != ch_cnt_t[i]) {
            if(atcoder.find(i) == string::npos) {
                flag = false;
                break;
            }

            if(ch_cnt_s[i] > ch_cnt_t[i]) {
                ch_cnt_t['@'] -= ch_cnt_s[i] - ch_cnt_t[i];
            } else if(ch_cnt_s[i] < ch_cnt_t[i]) {
                ch_cnt_s['@'] -= ch_cnt_t[i] - ch_cnt_s[i];
            }
        }
    }

    if(flag && ch_cnt_t['@'] >= 0 && ch_cnt_s['@'] >= 0) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
