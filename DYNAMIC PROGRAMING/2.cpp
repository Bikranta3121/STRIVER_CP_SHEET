#include<bits/stdc++.h>
using namespace std;
int rec(int i,int j,string &str,string &cry,vector<vector<int>> &dp)
{
    if(j==3) return 1;
    if(i==str.size()) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int take=0;
    if(str[i]==cry[j])
    {
        take=rec(i+1,j+1,str,cry,dp);
    }
    int notake=rec(i+1,j,str,cry,dp);
    return dp[i][j]=take+notake;
}
int main()
{
   
        
        string cry="QAQ";
        string str;
        cin>>str;
        vector<vector<int>> dp(str.size()+1,vector<int>(4,-1));
        cout<<rec(0,0,str,cry,dp);
        return 0;
   
}
