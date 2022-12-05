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
    while(n--)
    {
      int a,b,c;
      cin>>a>>b>>c;
      int x= (a>=c)?-1:1;
      int y=(a<=c/b)?-1:b;
      cout<<x<<" "<<y;
        cout<<endl;
    }
    return 0;    
}
