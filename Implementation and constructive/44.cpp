#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     string s;
     cin>>s;
     int max_diff=INT_MIN;
     for(int i=0;i<n;i++)
     {
        for(int j=0;j<n;j++)
        {
            if(s[j]=='1')
            {
               max_diff=max(max_diff,abs(j-i));
            }
        }
     }
     if(max_diff==INT_MIN) cout<<n;
     else cout<<2*(max_diff+1);
     cout<<endl;
    }
    return 0;
}
