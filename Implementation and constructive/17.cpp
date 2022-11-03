#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    unordered_set<char> distinct;
    for(char ch:s)
    {
        distinct.insert(ch);
    }
    if(distinct.size()%2==0) cout<<"CHAT WITH HER!";
    else cout<<"IGNORE HIM!";
    return 0;
}
