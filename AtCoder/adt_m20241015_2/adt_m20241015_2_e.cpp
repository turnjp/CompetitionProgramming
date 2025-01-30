#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, q;

    cin >> n >> q;

    vector<int> xs(q);

    for(int &x : xs) {
        cin >> x;
    }

    vector<int> vs(n);
    map<int, int> im;
    for(int i = 0; i < n; i++) {
        vs[i] = i + 1;
        im[i + 1] = i;
    }

    for(int x : xs) {
        int idx = im[x];
        int next_idx = (idx + 1 < n) ? idx + 1 : idx - 1;
        int next_x = vs[next_idx];

        im.erase(x);
        im.erase(next_x);
        im[x] = next_idx;
        im[next_x] = idx;

        vs[idx] = next_x;
        vs[next_idx] = x;
    }

    for(int i = 0; i < (int)vs.size(); i++) {
        if(i < (int)vs.size() - 1) {
            cout << vs[i] << " ";
        } else {
            cout << vs[i] << endl;
        }
    }

    return 0;
}
