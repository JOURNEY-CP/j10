#include<iostream>
#include<cstring>
using namespace std;
int main(){
	int t,i,j;
	char a[100005],b[100005];
	cin>>t;
	int flag;
	int al,bl;
	int count,max;
	int gfa,gfb;
	while(t--){
		max=0;count=0;
		cin>>a>>b;
		al=strlen(a);
		bl=strlen(b);
		gfa=(al==1&&a[0]=='0')?1:0;
		gfb=(bl==1&&b[0]=='0')?1:0;
		if(al>bl){
			for(i=al;i>=0;i--){
				if(i-al+bl>=0){
					b[i]=b[i-al+bl];
				}
				else b[i]='0';
			}
		}
		if(al<bl){
			for(i=bl;i>=0;i--){
				if(i-bl+al>=0){
					a[i]=a[i-bl+al];
				}
				else a[i]='0';
			}
			al=bl;
		}
		flag=0;
		while(al--){
			if(a[al]=='0'&&b[al]=='0'){
				flag=0;
				count++;
				if(max<count)max=count;
				count=0;
			}
			if(a[al]=='0'&&b[al]=='1'){
				if(flag==1)
					count++;
			}
			if(a[al]=='1'&&b[al]=='0'){
				if(flag==1)
					count++;
			}
			if(a[al]=='1'&&b[al]=='1'){
				flag=1;
				count++;
				if(max<count)max=count;
				count=1;
			}
		}
		count++;
		if(max<count)max=count;
		if(gfb==1)cout<<0<<endl;
		else if(gfa==1)cout<<1<<endl;
		else cout<<max<<endl;
	}
	return 0;
}
