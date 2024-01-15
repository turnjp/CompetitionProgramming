// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    vector<string> mass(8);
    for(int i = 0; i < 8; i++) {
        string s;
        cin >> s;
        if(s.find("*") != string::npos) {
            cout << (char)(s.find("*") + 'a') << 8 - i << endl;
            return 0;
        }
    }

    return 0;
}
