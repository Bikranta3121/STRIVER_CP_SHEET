#include<bits/stdc++.h>
using namespace std;
int main()
{
   
        int n;
        cin>>n;
        int a[n];
        int count=0;
        int prev=0;
        int ans=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>prev)
            {
                count++;
                prev=a[i];
            }
            else{
                count=1;
                prev=a[i];
            }
            ans=max(count,ans);
       }
        cout<<ans;
        return 0;
   
}
