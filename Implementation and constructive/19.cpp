#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    int n=s.size();
    for(int i=n/2;i<n;i++)
    {
        cout<<s[i];
        if(i!=n-1) cout<<"+";
    }
    return 0;
}
