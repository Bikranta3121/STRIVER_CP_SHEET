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
   int n,x;
   cin>>n>>x;
   if(n<=2)
    cout<<1;
   else
   {
       n=n-2;
       if(n%x==0)
        cout<<n/x+1;
       else
        cout<<n/x+2;
   }
   cout<<endl;
  }
  return 0;
}
