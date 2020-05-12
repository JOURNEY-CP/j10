#include<bits/stdc++.h>
using namespace std;
 
 
int main()
{   
    long long int t,i,j,d,n,k,f;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		i=0;
		long long int c[100]={};
		f=0;
		while(i<n)
		{
			cin>>d;
			j=0;
			while(d)
			{
				c[j]+=d%k;
				if(c[j]>1)
				f++;
				d/=k;
				j++;
			}
			i++;
		}
		if(f)
		cout<<"NO\n";
		else
		cout<<"YES\n";
	}
}