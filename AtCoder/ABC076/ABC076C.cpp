    //問題URL
    //http://abc076.contest.atcoder.jp/tasks/abc076_c

    //解き方メモ
    //tが当てはまる場所を探し、残り?は辞書順先頭のaで埋める
    //tが２箇所以上に当てはまる場合、なるべく後ろに当てはめる（当てはめなかった側はaで埋まるため、そちらが辞書順で先になる）
    //そのため、tが当てはまる場所は後方から探す
    
    #include<iostream>
    #include<string>
    using namespace std;

    int main(){
        string sd,t;

        //sd,t入力
        cin >> sd >> t;

        bool flag;
        for(int i = sd.length()-t.length(); i>=0; i--){ //i:tが当てはまるか試行する部分文字列の先頭位置
            string ts = sd.substr(i,t.length()); //ts:sの部分文字列。tが当てはまるか判定する対象

            //tsにtが当てはまるか判定。当てはならない時にbreak
            flag = true;
            for(int j=0;j<ts.length();j++){
                if(ts[j] != t[j] && ts[j] != '?') {
                    flag = false;
                    break;
                }
            }
            if(flag){ //一致した場合
                sd.replace(i,t.length(),t); //tに置き換え
                break;
            }
        }

        //tが当てはまった場合
        if(flag){
            //?を全てa（辞書順先頭文字）に置換
            for(int i=0;i<sd.length();i++){
                if(sd[i]=='?'){
                    sd[i] = 'a';
                }
            }
        } else {
            sd = "UNRESTORABLE";
        }

        //出力
        cout << sd << endl;

        return 0;
    }