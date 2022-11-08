#include<bits/stdc++.h>
using namespace std;
// int f(int n,int m)
// {
//     if(n==m) return 1;
//     if(n>m) return 0;
//     int take=1+f(n*3,m);
//     int notake=1+f(n*2,m);
//     return take+notake; 
// }
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        int count=-1;
        for(int j=0;j<=n+i;j++)
        {
            if(j<n-i) cout<<"  ";
            else if(i==0) cout<<0;
            else if(j>=n-i and j<=n)
             cout<<++count<<" ";
            else if(j>n and j<=n+i) 
            {
                if(count!=1)
                  cout<<--count<<" ";
                else
                 cout<<--count;
            }
        }    
        cout<<endl;
    }
    for(int i=2*n-1;i>=n;i--)
    {
        int count=-1;
        for(int j=0;j<=n+(i%n);j++)
        {
           if(j<n-(i%n)) cout<<"  ";
           else if(i==n) cout<<0;
            else if(j>=n-(i%n) and j<=n)
             cout<<++count<<" ";
            else if(j>n and j<=n+(i%n))
            {
                if(count!=1)
                  cout<<--count<<" ";
                else
                 cout<<--count;
            }
            
        }
        cout<<endl;
    }
    
}
