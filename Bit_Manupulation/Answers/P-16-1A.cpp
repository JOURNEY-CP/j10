#include<iostream>
using namespace std;
int main(){
	int x,s;
	s=0;
	cin>>x;
	while(x){
		s=s+x%2;
		x/=2;
	}
	cout<<s;
	return 0;
}