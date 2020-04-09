#include<stdio.h>
#include<string.h>
int mymain()
{
	char s[50];
	scanf("%s",s);
	printf("%d\n",s[0]+s[strlen(s)-1]-96);
	
}
int main()
{
	int T;
	scanf("%d",&T);
	while(T--)
		mymain();
}
