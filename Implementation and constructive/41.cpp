#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin>>n>>x>>y;
    int a[n];
    for(int j=0;j<n;j++)
     cin>>a[j];
    int i;
    for(i=0;i<n;i++)
    {
        int flag=0;
        int flag1=0;
        if(i<x)
        {
          int t=i-1;
            while(t>=0)
            {
                if(a[i]>a[t])
                 flag=1;
                t--; 
            }
        }
        else
        {
            int t=i-1;
            while(t>=i-x)
            {
                if(a[i]>a[t])
                 flag=1;
                t--; 
            }
        }
        if(i>n-y-1)
        {
            int t=n-1;
            while(t>i)
            {
                if(a[i]>a[t])
                 flag1=1;
                t--; 
            }
        }
        else
        {
           int t=i+1;
           while(t<=i+y)
           {
               if(a[i]>a[t])
                 flag1=1;
                t++;
           }
        }
        if(!flag and !flag1) break;
    }
    cout<<i+1;
    return 0;
}
