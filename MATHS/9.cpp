#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a=m/2;
        a=max(a,m-a);
        
        if(n>=3)
        cout<<2*m;
       else
       {
         if(n==1) cout<<0;
         else cout<<m;
       } 
       cout<<endl;
        
    }
}
// 2 0 2 0 2 0 2 0 2 0
