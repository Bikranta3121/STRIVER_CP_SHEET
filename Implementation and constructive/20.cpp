#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        int big=max(a,b);
        int small=min(a,b);
        int count=0;
        while(big<=n)
        {
            int sum=big+small;
            small=max(big,small);
            big=sum;
            count++;
        }
        cout<<count<<endl;
        
    }

    return 0;
}
