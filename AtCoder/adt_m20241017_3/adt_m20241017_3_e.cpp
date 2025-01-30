#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    int ts = m;
    int ats = 0;
    int max_ats = 0;
    for(char ch : s) {
        switch(ch) {
        case '0':
            max_ats = max(max_ats, ats);
            ts = m;
            ats = 0;
            break;
        case '1':
            if(ts > 0) {
                ts--;
            } else {
                ats++;
            }
            break;
        case '2':
            ats++;
            break;
        default:
            break;
        }
    }
    max_ats = max(max_ats, ats);

    cout << max_ats << endl;

    return 0;
}
