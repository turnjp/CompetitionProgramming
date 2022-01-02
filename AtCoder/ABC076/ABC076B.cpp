    //問題URL
    //

    //解き方メモ
    //
    
    #include<iostream>
    using namespace std;

    int main(){
        int n,k;
        int result;

        //R,G入力
        cin >> n >> k;

        //N回計算
        result = 1;
        for(int i=0;i<n;i++){
            //２倍とK加算の小さい方を判定
            if(result > k)
                result += k;
            else
                result *= 2;
        }

        //出力
        cout << result << endl;

        return 0;
    }