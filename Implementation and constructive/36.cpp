#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int i=n-1;
    int sum=0;
    while(i>=1)
    {
      sum+=i+((i-1)*(n-i));
      i--;
    }
    cout<<sum+n<<endl;
    return 0;
}
