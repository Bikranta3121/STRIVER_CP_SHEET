#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,c,n;
        cin>>a>>b>>c>>n;
        int max_ele=max(a,max(b,c));
        a=max_ele-a;
        b=max_ele-b;
        c=max_ele-c;
        if((n>=a+b+c and (n-(a+b+c))%3==0) )cout<<"Yes";
        else cout<<"No";
        cout<<endl;
    }
}
