#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int x=n*m;
        cout<<(x%2)+(x/2)<<endl;
    }
}
