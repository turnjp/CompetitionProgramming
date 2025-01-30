#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;

    cin >> n;
    int a[n][n];

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    for(int j = 0; j < n; j++) {
        bool first_flag = true;
        for(int i = 0; i < n; i++) {
            if(a[i][j]) {
                if(first_flag) {
                    first_flag = false;
                } else {
                    cout << " ";
                }
                cout << i + 1;
            }
        }
        cout << endl;
    }

    return 0;
}
