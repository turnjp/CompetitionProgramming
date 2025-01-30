#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main() {
    ll k;
    cin >> k;

    ll q = k;
    ll result;
    for(ll i = 1; q >= i; i++) {
        if(q % i == 0) {
            result = i;
            q = q / i;
        }
    }
    cout << result << endl;

    return 0;
}
