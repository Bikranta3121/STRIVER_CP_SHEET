#include<bits/stdc++.h>
using namespace std;

int main()
{
     ios_base::sync_with_stdio(false);
   
       int t;
       cin>>t;
       while(t--)
       { 
        int n;
        cin>>n;
        int arr[n];
        vector<int> ans(n,0);
        map<int,int> start;
        map<int,int> ends;
        for(int i=0;i<n;i++)
        {
         cin>>arr[i];
         if(arr[i]!=0)
         { 
          start[i]++;
          ends[i-arr[i]+1]++;
         }
        }
        long long int count=0;
        for(int i=n-1;i>=0;i--)
        {
           count+=start[i];
           if(count>0)
            arr[i]=1;
           else arr[i]=0; 
           count-=ends[i];
        }
        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
      }
       return 0;
}
