#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> ts(n), ks(n);
    vector<vector<int>> ass(n);

    for(int i = 0; i < n; i++) {
        cin >> ts[i] >> ks[i];
        vector<int> as(ks[i]);
        ass[i] = as;

        for(int &a : ass[i]) {
            cin >> a;
            a--;
        }
    }

    deque<int> q;
    long long result = ts[n - 1];
    set<int> s;
    s.insert(n - 1);
    for(int a : ass[n - 1]) {
        q.push_back(a);
        s.insert(a);
    }

    while(!q.empty()) {
        int target = q[0];
        q.pop_front();

        result += ts[target];
        for(int a : ass[target]) {
            if(s.find(a) == s.end()) {
                q.push_back(a);
                s.insert(a);
            }
        }
    }

    cout << result << endl;

    return 0;
}
