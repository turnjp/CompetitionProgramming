#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<string> ss(n);

    for(string &s : ss) {
        cin >> s;
    }

    vector<string> ms1(4);
    ms1[0] = "###.";
    ms1[1] = "###.";
    ms1[2] = "###.";
    ms1[3] = "....";
    vector<string> ms2(4);
    ms2[0] = "....";
    ms2[1] = ".###";
    ms2[2] = ".###";
    ms2[3] = ".###";

    for(int i = 0; i < n - 8; i++) {
        for(int j = 0; j < m - 8; j++) {
            bool flag = true;
            for(int i2 = 0; i2 < 4; i2++) {
                for(int j2 = 0; j2 < 4; j2++) {
                    int y = i + i2;
                    int x = j + j2;
                    if(ss[y][x] != ms1[i2][j2]) {
                        flag = false;
                        break;
                    }
                }
                if(!flag) {
                    break;
                }
            }
            if(flag) {
                for(int i2 = 0; i2 < 4; i2++) {
                    for(int j2 = 0; j2 < 4; j2++) {
                        int y = i + 5 + i2;
                        int x = j + 5 + j2;
                        if(ss[y][x] != ms2[i2][j2]) {
                            flag = false;
                            break;
                        }
                    }
                    if(!flag) {
                        break;
                    }
                }
            }
            if(flag) {
                cout << i + 1 << " " << j + 1 << endl;
            }
        }
    }

    return 0;
}
