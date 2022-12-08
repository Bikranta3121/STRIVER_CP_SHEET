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
     int flag=0;
     for(int i=0;i<n/2;i++)
     {
       int x=s[i]-'a';
       int y=s[n-i-1]-'a';
       if(s[i]!=s[n-i-1] and abs(x-y)!=2)
       {
        flag=1;
        break;
       }
     }
     if(flag) cout<<"NO";
     else cout<<"YES";
     cout<<endl;
    }
    return 0;
}
