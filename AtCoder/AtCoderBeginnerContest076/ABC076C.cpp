    //問題URL
    //

    //解き方メモ
    //
    
    #include<iostream>
    #include<string>
    using namespace std;

    int main(){
        string sd,t;
        string s;

        //sd,t入力
        cin >> sd >> t;

        //sに複製
        s.replace(0,sd.length(),sd);

        //tがまだ存在しない場合、挿入場所を探す
        if(sd.find(t) == -1){
            int qcnt=0;
            //後ろからtが当てはまる箇所を検索
            int i = sd.length()-1;
            for(; i>=0; i--){
                if(sd[i]=='?'){
                    qcnt++;
                    //tの文字数分の連続?を見つけた場合
                    if(qcnt >= t.length()){
                        s.replace(i,t.length(),t);
                        break; //t当てはめ終了
                    }
                } else {
                    //?以外の文字について、tが当てはめれるか確認
                    //現在位置iから0〜qcnt個の?がtの一部と置き換わる可能性がある
                    int tmp_qcnt = qcnt;
                    for(; tmp_qcnt >= 0; tmp_qcnt--){
                        int j = 0;
                        for(; j+tmp_qcnt<t.length();j++){
                            if(s[i-j] != t[(t.length()-1)-(j+tmp_qcnt)] || s[i-j] != '?'){
                                break; //当てはまらないこと確定
                            }
                        }
                        if(j+tmp_qcnt == t.length()){
                            s.replace(i-j,t.length(),t);
                            break; //t当てはめ終了
                        }
                    }
                    //LOOP途中で終了
                    if(tmp_qcnt != 0){
                        break; //t当てはめ終了
                    }
                    qcnt=0;

                }
            }
            if(i == 0){
                s = "UNRESTORABLE";
            }
        }

        //?を全てa（辞書順先頭文字）に置換
        for(int i=0;i<s.length();i++){
            if(s[i]=='?'){
                s[i] = 'a';
            }
        }

        //出力
        cout << s << endl;

        return 0;
    }