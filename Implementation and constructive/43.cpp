#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long int y=0;
    long long int z=0;
    int i;
    if(n<7 and n!=4) cout<<-1;
    else
    {
        int flag=0;
        int min_x=INT_MAX;
        
        for(i=0;i<=n/4;i++)
        {
         int x=n-4*i;
         if(x%7==0)
         {
           if(min_x>(i+x/7)) 
           {
            z=i;    
            y=x/7;
            min_x=i+x/7;
            flag=1;
           }
         }
        }
        long long int sum=0;
        while(z>0)
        {
         cout<<"4";
         z--;
        }
       while(y>0)
       {
        cout<<"7";
        y--;
       }
       if(!flag) cout<<-1<<endl;
       
    } 
    return 0;
}
