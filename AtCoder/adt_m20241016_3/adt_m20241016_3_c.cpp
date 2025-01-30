#include <bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin >> q;
    vector<int> a;

    for(int i = 0; i < q; i++) {
        int q1, q2;
        cin >> q1 >> q2;

        if(q1 == 1) {
            a.push_back(q2);
        } else if(q1 == 2) {
            cout << a[a.size() - q2] << endl;
        }
    }

    return 0;
}
