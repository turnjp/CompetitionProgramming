#include <bits/stdc++.h>

using namespace std;

// bool in_mass(int x, int y, int w, int h)
// { return x >= 0 && y >= 0 && x < w && y < h; }

// const int dx[8] = {0, 0, -1, 1, 1, 1, -1, -1};
// const int dy[8] = {-1, 1, 0, 0, -1, 1, 1, -1};

bool is_palindrome(string s) {
    for(int i = 0; i < s.length() / 2; i++) {
        if(s[i] != s[s.length() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cin >> s;

    int back_a_cnt = 0;
    while(s.back() == 'a') {
        s.pop_back();
        back_a_cnt++;
    }

    // aしかない
    if(s.length() == 0) {
        cout << "Yes" << endl;
        return 0;
    }

    int front_a_cnt = 0;
    for(int i = 0; s[i] == 'a'; i++) {
        front_a_cnt++;
    }
    s.erase(0, front_a_cnt);

    // 先頭のaが末尾のaより多い
    if(front_a_cnt > back_a_cnt) {
        cout << "No" << endl;
        return 0;
    }

    // 前後のaを除いて回文か
    if(is_palindrome(s)) {
        cout << "Yes" << endl;
        return 0;
    }

    cout << "No" << endl;
    return 0;
}
