#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int min_ele=min(a,b);
        int max_ele=max(a,b);
        if(2*min_ele>max_ele)
         cout<<4*min_ele*min_ele;
        else
         cout<<max_ele*max_ele; 
       cout<<endl;
        
    }
}
// 2 0 2 0 2 0 2 0 2 0
