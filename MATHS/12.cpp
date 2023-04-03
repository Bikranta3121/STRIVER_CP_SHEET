#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int odd=0;
        int even=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            if(arr[i]%2==i%2) continue;
            if(arr[i]%2) odd++;
            else even++;
        }
        if(even==odd)cout<<even;
        else cout<<"-1";
       cout<<endl;
        
    }
}
// 2 0 2 0 2 0 2 0 2 0
