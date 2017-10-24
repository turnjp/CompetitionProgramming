#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main(){
    int n,k;
    vector<int> r;
    double result;

    //N,K入力
    cin >> n >> k;

    //R入力
    for(int i=0;i<n;i++){
        int tmp;
        cin >> tmp;
        r.push_back(tmp);
    }

    /* 大きい順からK個を視聴対象とする。視聴対象をレートが小さい順に見る */
    //Rを降順ソート
    sort(r.begin(),r.end(),greater<int>());

    //先頭K個だけ逆順（＝昇順）に並び替え
    reverse(r.begin(),r.begin()+k);

    result = 0;
    for(int i=0; i<k; i++){
        result = (result + r[i])/2.0;
    }

    printf("%.6lf",result);
    cout << endl;

    return 0;
}