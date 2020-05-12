#include<iostream>
using namespace std;
 
int main()
{
    long long int n,i,k=0,x,d,r,p;
    cin>>n>>p;
    i=1;
    while(k==0)
    { 
      d=0;
      
      
      x=n-i*p;
      if(x<=0)
      {cout<<"-1";
       break;
      }
      else
      {
       while(x!=0)
       {
         r=x%2;
         if(r==1)
         {d++;}
         if(d>i)
         {
          break;
         }
         x=x/2;
       }
       x=n-i*p;
       if(d<=i&&i<=x)
       {
        cout<<i;
        break;
       }
      }
      i++;
    }
    return 0;
}