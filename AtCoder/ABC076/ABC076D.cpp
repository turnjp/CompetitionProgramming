    //問題URL
    //http://abc076.contest.atcoder.jp/tasks/abc076_d

    //解き方メモ
    //
    
    #include<iostream>
    #include<algorithm>
    using namespace std;

    #define MAX_N 100

    int main(){
        int n;
        int t[MAX_N];
        int v[MAX_N];

        //0.5s単位の速度。ve[1]で0.5秒時点の速度
        double ve[MAX_N*200*2+1];

        double result;
        
        //入力
        cin >> n;
        for(int i=0;i<n;i++){
            cin >> t[i];
        }
        for(int i=0;i<n;i++){
            cin >> v[i];
        }

        //計算
        //veを制限速度vで埋める。ただし、0sと終了時点は速度0
        ve[0] = 0;
        int total_half_s = 1;
        for(int i=0;i<n;i++){ //i:ti,vi
            if(i>0)
                ve[total_half_s-1] = min(v[i],v[i-1]);
            for(int j=0;j<t[i];j++){ //tの秒数だけ埋める。0.5s単位なので、veは要素数が倍。
                ve[total_half_s]   = v[i];
                ve[total_half_s+1] = v[i];
                total_half_s += 2;
            }
        }
        int ve_n = total_half_s-1;
        ve[ve_n] = 0;

        //veを開始から0.5s単位で加速した速度で埋める。ただし、制限速度vを上回るなら制限速度vとする。
        int i;
        for(i=1;i<ve_n;i++){
            ve[i] = min(ve[i],ve[i-1]+0.5);
        }
        //veを終着に向けて0.5s単位で減速した速度（0.5s未来から見て0.5速い速度：ve[i+1]+0.5）で埋める。
        //ただし、先のfor文の速度（ありえる速度の上限：ve[i]）を上回る速度は設定しない。
        for(i=ve_n-1;i>0;i--){
            ve[i] = min(ve[i],ve[i+1]+0.5);
        }

        //0.5s単位で移動距離を足し合わせる
        result = 0;
        for(int i=0;i<ve_n;i++){
            //台形の公式：（上辺（現在速度）＋底辺（0.5s後の速度））×高さ（0.5s）／２
            result += (ve[i]+ve[i+1])*0.5/2;
        }

        printf("%lf",result);
        cout << endl;

        return 0;
    }