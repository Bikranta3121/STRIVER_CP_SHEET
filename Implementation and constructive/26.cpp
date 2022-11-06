#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string t;
    cin>>t;
    int k=1;
    int j=1;
    string ans="";
    for(int i=0;i<t.size();i++)
    {
        k-=1;
        if(k==0)
        {
           ans+=t[i];
           k=j+1;
           j=j+1;
        }
    }
    cout<<ans;
    return 0;
}
