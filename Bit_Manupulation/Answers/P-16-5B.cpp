#include<bits/stdc++.h>
using namespace std;
int setbits(long long int n){
	int c=0;
	while(n){
		n=n&(n-1);
		c++;
	}
	return c%2;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long long int i,j,t,n,q,k;
	cin>>t;
	int sol[2]={0};
	while(t--){
		cin>>n>>q;
		sol[0]=0;sol[1]=0;
	long long int a,b,c;
		for(i=0;i<n;i++){
			cin>>a;	 
				sol[setbits(a)]++;	
		}
	//	sol[0]=0;sol[1]=0;
		for(i=0;i<q;i++){
			cin>>b;
			k=setbits(b);
		     if(k%2==0){	
			cout<<sol[0]<<" "<<sol[1]<<"\n";}
			else
			{
			    cout<<sol[1]<<" "<<sol[0]<<"\n";
			}
		}
	}
	return 0;	
}