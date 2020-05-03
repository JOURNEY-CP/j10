#include <iostream>
using namespace std;

int main() {
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    if(a>=b && a>=c)
	    {
	        (b>c)?(cout<<b<<endl):(cout<<c<<endl);
	    }
	    else if(b>=a && b>=c)
	    {
	        (a>c)?(cout<<a<<endl):(cout<<c<<endl);
	    }
	    else
	    {
	        (b>a)?(cout<<b<<endl):(cout<<a<<endl);
	    }
	}
	return 0;
}
