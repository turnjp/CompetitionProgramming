#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    int n,k;
    int tmp;

    cin >> n >> k;

    vector<int> p(n);
    multiset<int> ps;

    //for(int i=0;i<n;i++){
    //    cin >> p[i];
    //}

    //先頭k個を取得・格納
    for(int i=0;i<k;i++){
        cin >> tmp;
        ps.insert(tmp);
    }

    //取得済みデータから昇順先頭（＝先頭k個中の最小値＝先頭k個中k番目に大きな数）を取得・格納
    vector<int> result;
    auto itr = ps.begin();
    result.push_back(*itr);
    int now = *itr;

    //取得、判定、結果格納の繰り返し
    for(int i=k;i<n;i++){
        //次の値を取得
        cin >> tmp;
        //現在のk番目now以下の場合、k番目の値は変わらない
        if(now >= tmp){
            result.push_back(now);
        //現在のk番目nowより大きい場合、k番目の値がずれる
        } else {
            //ソート済みデータセットに追加
            //同時に最小値を削除
            ps.insert(tmp);
            ps.erase(now);

            //昇順先頭（＝k番目に大きな数）を取得・格納
            itr = ps.begin();
            result.push_back(*itr);
            now = *itr;
        }
    }
    for(int i=0;i<n-k+1;i++){
        cout << result[i] << endl;
    }
}