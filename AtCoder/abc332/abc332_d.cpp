#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

int main() {
    int h, w;

    cin >> h >> w;

    vector<int> ridv(h);
    vector<int> cidv(w);

    vector<vector<vector<int>>> ab(2, vector(h, vector<int>(w)));

    for(int ii = 0; ii < ab.size(); ii++) {
        for(int i = 0; i < h; i++) {
            for(int j = 0; j < w; j++) {
                cin >> ab[ii][i][j];
            }
        }
    }

    for(int i = 0; i < ridv.size(); i++) {
        ridv[i] = i;
    }

    for(int i = 0; i < cidv.size(); i++) {
        cidv[i] = i;
    }

    do {
        do {
            bool match = true;
            for(int i = 0; i < h; i++) {
                for(int j = 0; j < w; j++) {
                    if(ab[0][ridv[i]][cidv[j]] != ab[1][i][j]) {
                        match = false;
                        break;
                    }
                }
                if(!match) {
                    break;
                }
            }
            if(!match) {
                continue;
            }

            int cnt = 0;
            for(int i = 0; i < ridv.size(); i++) {
                for(int j = i + 1; j < ridv.size(); j++) {
                    if(ridv[i] > ridv[j])
                        cnt++;
                }
            }
            for(int i = 0; i < cidv.size(); i++) {
                for(int j = i + 1; j < cidv.size(); j++) {
                    if(cidv[i] > cidv[j])
                        cnt++;
                }
            }

            cout << cnt << endl;

            return 0;

        } while(next_permutation(cidv.begin(), cidv.end()));
    } while(next_permutation(ridv.begin(), ridv.end()));

    cout << -1 << endl;

    return 0;
}
