#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    int n,k;

    cin >> n >> k;

    vector<int> p(n);
    multiset<int> ps;
    int tmp,now;
    int cnt=0;
    vector<int> result;

    //for(int i=0;i<n;i++){
    //    cin >> p[i];
    //}

    for(int i=0;i<k;i++){
        cin >> tmp;
        ps.insert(tmp);
    }
    auto itr = ps.begin();
    result.push_back(*itr);
    now = *itr;
    for(int i=k;i<n;i++){
        cin >> tmp;
        if(now >= tmp){
            result.push_back(now);
        } else {
            ps.insert(tmp);
            cnt++;
            itr = ps.begin();
            for(int j=0;j<cnt;j++){
                ++itr;
            }
            result.push_back(*itr);
        }
    }
    for(int i=0;i<n-k+1;i++){
        cout << result[i] << endl;
    }
}