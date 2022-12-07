#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    int ans;
    int min_ans=INT_MAX;
    if(n<=m) cout<<-1;
    else{
    for(int i=0;i<=n+1;i++)
    {
        ans=i+(n-i)/2+(n-i)%2;
        if(ans%m==0)
           min_ans=min(ans,min_ans);
         
    }
    if(min_ans!=INT_MAX)
     cout<<min_ans;
    else
     cout<<-1;
    }
    cout<<endl;
}
