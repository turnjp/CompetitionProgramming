#include<iostream>
using namespace std;

int main(){
    int a[3][3];
    bool check[3][3];
    int n;

    for(int i=0; i<3; i++){
        for (int j = 0; j < 3; j++){
            cin >> a[i][j];
            check[i][j] = false;
        }
    }
    
    cin >> n;

    int b[n];

    for(int i=0; i<n; i++){
        cin >> b[i];
        for(int x=0; x<3; x++){
            for(int y=0; y<3; y++){
                if(a[x][y]==b[i]){
                    check[x][y] = true;
                }
            }
        }
    }
    
    bool bingo_flg = false;
    for(int i=0;i<3;i++){
        if((check[i][0] && check[i][1] && check[i][2])
        || (check[0][i] && check[1][i] && check[2][i]) ){
            bingo_flg = true;
            break;
        }
    }
    if((check[0][0] && check[1][1] && check[2][2])
    || (check[0][2] && check[1][1] && check[2][0])){
        bingo_flg = true;
    }

    cout << ((bingo_flg)?"Yes":"No") << endl;
}