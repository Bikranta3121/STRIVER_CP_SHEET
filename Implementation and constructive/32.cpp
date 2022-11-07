#include<bits/stdc++.h>
using namespace std;
// int f(int n,int m)
// {
//     if(n==m) return 1;
//     if(n>m) return 0;
//     int take=1+f(n*3,m);
//     int notake=1+f(n*2,m);
//     return take+notake; 
// }
int main()
{
    int n,m;
    cin>>n>>m;
    int count=0;
    if(n==m) cout<<0;
    else{
        if(m%n!=0) cout<<-1;
        else
        {
         m/=n;        
         while(m%3==0)
         {
          count++;
          m/=3;
         }
         while(m%2==0)
         {
            count++;
            m/=2;
         }
        if(m==1) cout<<count;
        else cout<<-1;
        }
    }
   
    return 0;
}
