#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int> stmap;
    vector<pair<string, string>> sts(n);

    for(pair<string, string> &st : sts) {
        cin >> st.first >> st.second;
        stmap[st.first]++;
        stmap[st.second]++;
    }

    for(pair<string, string> st : sts) {
        stmap[st.first]--;
        stmap[st.second]--;
        if(stmap[st.first] > 0 && stmap[st.second] > 0) {
            cout << "No" << endl;
            return 0;
        }
        stmap[st.first]++;
        stmap[st.second]++;
    }
    cout << "Yes" << endl;

    return 0;
}
