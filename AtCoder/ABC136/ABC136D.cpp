#include<iostream>
#include<vector>
using namespace std;

int main(){
    string lr;

    cin >> lr;

    vector<int> now(lr.length(),1);
    vector<int> prev(lr.length());
    vector<int> next(lr.length(),0);
    vector<int> zero(lr.length(),0);

    int i=0;
    int sj = 0;
    int ej = (int)next.size();

    while(i<=(int)lr.length()){
        bool sf = true;
        int tmp_ej = ej;
        for(int j=sj;j<ej;j++){
            if(now[j] > 0){
                if(lr[j]=='L'){
                    next[j-1] += now[j];
                } else if(lr[j]=='R'){
                    next[j+1] += now[j];
                }
                sf = false;
                tmp_ej = j+1;
            } else {
                if(sf){
                    sj = j;
                }
                tmp_ej = j;
            }
        }
        ej = tmp_ej;
        i++;
        if(i%2 == 0 && prev == next){
            break;
        }
        prev = now;
        now = next;
        next = zero;
    }

    for(int i=0;i<(int)next.size()-1;i++){
        cout << next[i] << ' ';
    }
    cout << next[next.size()-1] << endl;
}