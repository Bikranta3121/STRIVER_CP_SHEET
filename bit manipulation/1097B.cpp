#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int flag=0;
    for(int i=1;i< (1<<n);i++)
    {
        int sum=0;
        for(int j=0;j<n;j++)
        {
          if(i&(1<<j))
           sum+=arr[j];
          else sum-=arr[j]; 
        }
        while(sum<0) sum+=360;
        if(sum%360==0)
        {
            flag=1;
            break;
        }
    }
    if(flag) cout<<"Yes";
    else cout<<"No";
}
