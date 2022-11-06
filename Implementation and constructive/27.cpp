#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char a[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        int count=0;
        for(int j=0;j<m-1;j++)
        {
            if(a[n-1][j]!='R')
             count++;
        }
        for(int i=0;i<n-1;i++)
        {
            if(a[i][m-1]!='D')
             count++;
        }
        cout<<count<<endl;
      }
    
    return 0;
}
