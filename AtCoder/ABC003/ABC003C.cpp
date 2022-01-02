    //問題URL
    //http://abc003.contest.atcoder.jp/tasks/abc003_3

    //解き方メモ
    //レートが小さい順に視聴（レート変化の計算を）する。
    //先に対象とした値ほど、２で割られるため。
    //レート０から最終的なレートまでの計算を一つの数式で書くとわかりやすい。
    
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

        //計算実施
        result = 0;
        for(int i=0; i<k; i++){
            result = (result + r[i])/2.0;
        }

        //結果出力
        printf("%.6lf",result);
        cout << endl;

        return 0;
    }