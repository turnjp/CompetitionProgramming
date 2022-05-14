#include<iostream>
using namespace std;

int main(){
    string s;

    cin >> s;

    for(int i=0;i<6/s.length();i++){
        cout << s;
    }
    cout << endl;
}
