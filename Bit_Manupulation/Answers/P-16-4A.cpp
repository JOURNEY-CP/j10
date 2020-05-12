#include<iostream>
#include<vector>

using namespace std;

int lonelyinteger(vector<int> a) {
  int sol=0;
  for(auto i:a)sol^=i;
  return sol;
}

int main(){
	int n,i,ans,b;
	cin>>n;
	vector<int>a;
	for(i=0;i<n;i++){
		cin>>b;
		a.push_back(b);
	}
	
	ans=lonelyinteger(a);
	
	cout<<ans<<endl;
	
}
