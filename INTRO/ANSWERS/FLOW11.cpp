#include <iostream>
#include<stdio.h>
using namespace std;

int main() {
	int t;
	float n,sum;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%f",&n);
	    if(n<1500)
	    sum=float(2*n);
	    else
	    {
	        sum=2*n+500.00-(0.02)*n;
	    }
	    printf("%0.2f\n",sum);
	}
	return 0;
}
