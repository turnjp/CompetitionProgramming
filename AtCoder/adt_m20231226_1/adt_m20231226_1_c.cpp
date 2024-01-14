// #include <atcoder/all>
#include <bits/stdc++.h>

using namespace std;
// using namespace atcoder;

int main() {
    int n;
    cin >> n;

    vector<long long> wv(n);
    vector<int> xv(n);

    for(int i = 0; i < n; i++)
        cin >> wv[i] >> xv[i];

    long long max_n = 0;
    for(int i = 0; i < 24; i++) {
        long long sum = 0;
        for(int j = 0; j < n; j++) {
            int y = (xv[j] + i) % 24;
            if(9 <= y && y <= 17)
                sum += wv[j];
        }
        max_n = max(max_n, sum);
    }

    cout << max_n << endl;

    return 0;
}
