#include<bits/stdc++.h>
using namespace std;
int main()
{
     int t;
     cin>>t;
     while(t--)
     {
          long long int n,m;
          cin>>n>>m;
          int i,sum=0;
          for(i=1;i<=n;i++)
          {
               sum=sum+i;
          }
          if(sum==m)
          {
               cout<<1<<endl;
          }
          else
          {
               cout<<0<<endl;
          }
     }
}
