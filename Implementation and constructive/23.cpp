#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;
    cin>>x;
    int prev;
    for(int i=1;i<=x;i++)
    {
        int n=(i*(i+1))/2;
        if(n<=x)
        {
            prev=i;
            x=x-n;
        }
        else
         break;
    }
    cout<<prev;
    return 0;
}
