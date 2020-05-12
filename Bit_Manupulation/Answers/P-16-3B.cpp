//using merge function in stl


#include <bits/stdc++.h>
using namespace std;
long long int solve(int *a,int start,int finish){
    if(start>=finish)return 0;
    long long int sol=0;
    int mid=start+(finish-start)/2;
    sol+=solve(a,start,mid);
    sol+=solve(a,mid+1,finish);
    int i=start,j=0;
    for(j=mid+1;j<=finish;j++){
        while(i<=mid&&a[i]<a[j])i++;
        sol+=mid-i+1;
    }
    
    int k=finish-start+1;
    int b[k];
    merge(a+start,a+mid+1,a+mid+1,a+finish+1,b);
    for(i=0;i<k;i++)a[start+i]=b[i];
    
    return sol;
}
int main(){
	int n;
    cin>>n;
    vector<pair<int,int>> v;
    int t1,t2;
    for(int i=0;i<n;i++){
        cin>>t1>>t2;
        v.push_back(make_pair(t1,t2));
    }
    sort(v.begin(),v.end());
    int i=0,a[n];
    for(auto x:v)a[i++]=x.second;
    cout<<solve(a,0,n-1);
	return 0;
}


//with out using merge function

#include <bits/stdc++.h>
using namespace std;
void my_merge(int *a,int start,int finish){
    int mid=start+(finish-start)/2;
    int i,j,k;
    int b[finish-start+1];
    i=start;j=mid+1;k=0;
    while(i<=mid&&j<=finish){
        if(a[i]<a[j])
            b[k++]=a[i++];
        else
            b[k++]=a[j++];
    }
    while(i<=mid)b[k++]=a[i++];
    while(j<=finish)b[k++]=a[j++];
    for(i=0;i<k;i++)a[start+i]=b[i];
}
long long int solve(int *a,int start,int finish){
    if(start>=finish)return 0;
    long long int sol=0;
    int mid=start+(finish-start)/2;
    sol+=solve(a,start,mid);
    sol+=solve(a,mid+1,finish);
    int i=start,j=0;
    for(j=mid+1;j<=finish;j++){
        while(i<=mid&&a[i]<a[j])i++;
        sol+=mid-i+1;
    }
    my_merge(a,start,finish);
    return sol;
}
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> v;
    int t1,t2;
    for(int i=0;i<n;i++){
        cin>>t1>>t2;
        v.push_back(make_pair(t1,t2));
    }
    sort(v.begin(),v.end());
    int i=0,a[n];
    for(auto x:v)a[i++]=x.second;
    cout<<solve(a,0,n-1);
    return 0;
}