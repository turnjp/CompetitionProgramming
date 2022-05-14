#include<iostream>
using namespace std;

int main(){
    int n,a,b;
    string s;

    cin >> n >> a >> b;
    cin >> s;

    int limit1_cnt = 0;
    int limit2_cnt = 0;

    for(char c : s){
        switch(c){
            case 'a':
            if(limit1_cnt < a+b){
                cout << "Yes" << endl;
                limit1_cnt++;
            } else {
                cout << "No" << endl;
            }
            break;

            case 'b':
            if(limit1_cnt < a+b && limit2_cnt < b){
                cout << "Yes" << endl;
                limit1_cnt++;
                limit2_cnt++;
            } else {
                cout << "No" << endl;
            }
            break;

            case 'c':
            cout << "No" << endl;
            break;
        }
    }
}