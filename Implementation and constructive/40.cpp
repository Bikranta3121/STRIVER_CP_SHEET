#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin>>n;
  long long int a[n];
  for(int i=0;i<n;i++)
   cin>>a[i];
   long long int sum=a[n-1];
   long long int max_choc=a[n-1]-1;
  for(int i=n-2;i>=0;i--)
  {
          if(max_choc>=a[i])
          {
           sum+=a[i];
           max_choc=a[i]-1;
          }
          else
          {
            sum+=max_choc;
            if(max_choc>=1)
              max_choc--;
          }
      
}
   cout<<sum;
  
    return 0;
}
