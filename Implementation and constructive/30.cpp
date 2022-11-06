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
        stack<int> st;
        if(n==2)
        {
         cout<<2<<endl;
         cout<<1<<" "<<2<<endl;
         continue;
        }
        vector<vector<int>> ans;
    
        for(int i=1;i<=n;i++)
         st.push(i);
        while(st.size()>2)
        {
            int x=st.top();
            st.pop();
            int y=st.top();
            st.pop();
            int z=st.top();
            st.pop();
            vector<int> v;
            if((x+y)%2==0)
            {
                v.push_back(x);
                v.push_back(y);
                st.push(z);
                st.push((x+y)/2);
            }
            else if((x+z)%2==0)
            {
                v.push_back(x);
                v.push_back(z);
                st.push(y);
                st.push((x+z)/2);
            }
            ans.push_back(v);
        }
        int a=st.top();
        st.pop();
        int b=st.top();
        st.pop();
        ans.push_back({a,b});
        cout<<(a+b)/2<<endl;
        for(int i=0;i<ans.size();i++)
        {
          cout<<ans[i][0]<<" "<<ans[i][1]<<endl;
        }
        
    }

    return 0;
}
