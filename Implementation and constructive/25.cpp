#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int flag=0;
        int sum=0;
        int count=0;
        for(int i=0;i<s.size();i++)
        {
          if(flag==0 and s[i]=='1')
           flag=1;
          else if(flag==1 and s[i]=='0')
           count++;
          else if(s[i]=='1' and flag==1)
           {
               sum+=count;
               count=0;
           }
        }
        cout<<sum<<endl;
    }
    return 0;
}
