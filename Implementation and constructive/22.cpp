#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    string a,b,c,d,e;
    cin>>a>>b>>c>>d>>e;
    if(a[0]==s[0] || b[0]==s[0] || c[0]==s[0] || d[0]==s[0] || e[0]==s[0])
     cout<<"Yes";
    else if(a[1]==s[1] || b[1]==s[1] || c[1]==s[1] || d[1]==s[1] || e[1]==s[1])
     cout<<"Yes";
    else
     cout<<"No";
     return 0;
}
