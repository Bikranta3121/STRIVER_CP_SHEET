#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=n;
        int last_digit;
        while(x!=0)
        {
          last_digit=x;    
          x/=10;
        }
        int count=0;
        count=10*(last_digit-1);
        int boring=last_digit;
        int cnt=0;
        while(boring<=n)
        {
            boring=boring*10+last_digit;
            cnt++;
        }
        cnt=(cnt*(cnt+1))/2;
        count+=cnt;
        cout<<count<<endl;
    }
    return 0;
}
