// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    int n;
    cin >> n;

    map<int, int> s_map;

    for(int i = 0; i < n; i++) {
        int a;
        cin >> a;
        s_map[a] = i + 1;
    }

    int next = -1;
    for(int i = 0; i < n; i++) {
        next = s_map[next];
        cout << next << ((i < n - 1) ? " " : "\n");
    }

    return 0;
}
