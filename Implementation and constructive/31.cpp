#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    int a[7];
    for(int i=0;i<7;i++)
     cin>>a[i];
    while(t>0)
    {
        int ans;
        for(int i=0;i<7;i++)
        {
            if(t-a[i]>0)
            {
             ans=i;
             t=t-a[i];
            }
            else if(t==0)
            {
                cout<<ans+1;
                break;
            }
            else if(t-a[i]<=0)
            {
                cout<<i+1;
                t=t-a[i];
                break;
            }
        }
        
    }

    return 0;
}
