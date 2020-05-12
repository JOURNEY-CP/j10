#include <bits/stdc++.h>
#define lli long long
using namespace std ;
int main(){
    ios_base::sync_with_stdio(false) ;
    cin.tie(NULL) ;
    int t ;
    cin >> t ;
    while(t--){
        lli n , i , sc = 0 ;
        cin >> n ;
        vector<lli> a(n) ;
        for(i=0;i<n;++i) cin >> a[i] ;
        for(i=0;i<n;++i)    sc ^= a[i] ;
        cout << sc << '\n' ;
    }
    return 0 ;
}