#include <bits/stdc++.h>
using namespace std;

int main()
{ 
  int t;
  cin>>t;
  while(t--)
  {
   long long int x,y;
   cin>>x>>y;
   if(x*2<=y)
    cout<<x<<" "<<2*x;
   else 
    cout<<-1<<" "<<-1;
   cout<<endl;
  }
  return 0;
}
