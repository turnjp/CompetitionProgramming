#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;
    vector<int> as(n);
    vector<int> bs(n - 1);

    for(int &a : as) {
        cin >> a;
    }
    for(int &b : bs) {
        cin >> b;
    }
    sort(as.begin(), as.end());
    sort(bs.begin(), bs.end());

    int over = -1;
    int ai = as.size() - 1;
    int bi = bs.size() - 1;

    while(ai >= 0) {
        if(bs[bi] >= as[ai]) {
            // cout << "in:" << as[ai] << endl;
            ai--;
            bi--;
        } else {
            if(over != -1) {
                cout << -1 << endl;
                return 0;
            }
            over = as[ai];
            ai--;
        }
    }
    cout << over << endl;

    return 0;
}
