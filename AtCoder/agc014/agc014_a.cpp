#include <iostream>
using namespace std;

int main()
{
    int a,b,c;

    cin >> a >> b >> c;

    int pa,pb,pc;
    int cnt = 0;

    while(a%2!=1 && b%2!=1 && c%2!=1){
        cnt++;

        pa = a;
        pb = b;
        pc = c;

        a = pb/2 + pc/2;
        b = pa/2 + pc/2;
        c = pa/2 + pb/2;

        if(a == pa && b == pb && c == pc){
            cnt = -1;
            break;
        }
    }

    cout << cnt << endl;
}