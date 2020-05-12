#include<iostream>
using namespace std;
int solve(int a){
	if(a==0)return 0;
	int sol=a%4;
	if(sol==2)sol=1;
	else if(sol==1)sol=2;
	sol+=4*solve(a/4);
	return sol;
}
int main(){
	int a;
	cin>>a;
	cout<<solve(a);
}