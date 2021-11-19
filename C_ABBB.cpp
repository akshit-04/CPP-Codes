#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        stack<int> st;
        char temp=s[0];
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())
            st.push(s[i]);
            else if(s[i]=='B')
            st.pop();
            else
            {
                st.push(s[i]);
            }
            
        }
        cout<<st.size()<<"\n";
    }


    return 0;
    
}