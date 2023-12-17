#include <bits/stdc++.h>

using namespace std;

bool in_mass(int x, int y, int w, int h) {
    return x >= 0 && y >= 0 && x < w && y < h;
}
const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int n;
    cin >> n;

    int limit = 12;
    vector<long long> ruv;

    for(int i = 0; i < limit; i++) {
        ruv.push_back(stoll(string((i + 1), '1')));
    }

    vector<long long> sumv;
    for(int i = 0; i < limit; i++) {
        for(int j = i; j < limit; j++) {
            for(int k = j; k < limit; k++) {
                sumv.push_back(ruv[i] + ruv[j] + ruv[k]);
            }
        }
    }
    sort(sumv.begin(), sumv.end());

    cout << sumv[n - 1] << endl;

    return 0;
}
