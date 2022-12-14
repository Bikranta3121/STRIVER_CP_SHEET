/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>
using namespace std;

int main()
{ 
  int t;
  cin>>t;
  while(t--)
  {
   int x,y,z;
   cin>>x>>y>>z;
   if(x==y and x>=z) 
   {
    cout<<"YES"<<endl;
    cout<<x<<" "<<z<<" "<<z;
   }
   else if(x==z and x>=y)
    {
        cout<<"YES"<<endl;
        cout<<y<<" "<<x<<" "<<y;
    }
    else if(y==z and y>=x)
     {
         cout<<"YES"<<endl;
         cout<<x<<" "<<x<<" "<<y;
     }
    else
     cout<<"NO";
    cout<<endl;
  }
  return 0;
}
