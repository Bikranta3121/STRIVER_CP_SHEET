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
   int n;
   cin>>n;
   int arr[n];
   int odd=0;
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
    if(arr[i]%2!=0) odd++;
   }
   if(odd%2==0 and odd==n) cout<<"NO";
   else if(odd==0) cout<<"NO";
   else cout<<"YES";
   cout<<endl;
  }
  return 0;
}
