#include <bits/stdc++.h>
#define lli long long
using namespace std;
int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    lli n ;
    while(1){
        cin >> n ;
        if(n!=-1){
            lli tmp = n , i , cnt = 0 , tcnt = 0;
            vector<int> bt ;
            while(tmp>0){
                bt.push_back(tmp%2) ;
                tmp /= 2 ;
            }
            for(i=0;i<bt.size();++i){
                if(bt[i]==1) tcnt++ ;
                else tcnt = 0 ;
                if(tcnt>cnt) cnt = tcnt ;
            }
            cout << cnt << '\n' ;
        }
        else break ;
    }
}