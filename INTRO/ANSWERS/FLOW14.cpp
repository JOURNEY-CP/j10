#include <iostream>
using namespace std;

int main() {
	int t,a,c;
	float b;
	cin>>t;
	while(t--)
	{
	    int flag1=0,flag2=0,flag3=0;
	    cin>>a>>b>>c;
	    if(a>50)
	    flag1=1;
	    if(b<0.7)
	    flag2=1;
	    if(c>5600)
	    flag3=1;
	    if(flag1==1 && flag2==1 && flag3==1)
	    a=10;
	    else if(flag1==1 && flag2==1)
	    a=9;
	    else if(flag2==1 && flag3==1)
	    a=8;
	    else if(flag1==1 && flag3==1)
	    a=7;
	    else if(flag1==1 || flag2==1 || flag3==1)
	    a=6;
	    else 
	    a=5;
	    cout<<a<<endl;
	}
	return 0;
}
