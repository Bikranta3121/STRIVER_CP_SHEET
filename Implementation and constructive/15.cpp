#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,w;
    cin>>k>>n>>w;
    for(int i=1;i<=w;i++)
    {
      n-=k*i;
    }
    if(n<0) cout<<abs(n);
    else cout<<"0";
    return 0;
}
