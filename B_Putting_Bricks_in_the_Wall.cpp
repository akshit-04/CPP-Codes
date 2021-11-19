#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s[200];
        For(i,n) 
        cin>>s[i];
        vector<pair<int,int>> v;
        if (s[0][1]==s[1][0])
        {
            char u=s[0][1];
            if (s[n-1][n-2]==u) 
            v.pb(mp(n,n-1));
            if (s[n-2][n-1]==u) 
            v.pb(mp(n-1,n));
        }
        else if (s[0][1]!=s[1][0])
        {
            if (s[n-1][n-2]==s[n-2][n-1])
            {
                char u=s[n-2][n-1];
                if (s[0][1]==u) 
                v.pb(mp(1,2));
                if (s[1][0]==u) 
                v.pb(mp(2,1));
            }
            else
            {
                if (s[n-1][n-2]=='0') 
                v.pb(mp(n,n-1));
                if (s[n-2][n-1]=='0') 
                v.pb(mp(n-1,n));
                if (s[0][1]=='1') 
                v.pb(mp(1,2));
                if (s[1][0]=='1') 
                v.pb(mp(2,1));
            }
        
        }
        
        cout<<v.size()<<endl;
        For(i,v.size()) 
        cout<<v[i].first<<' '<<v[i].second<<endl;
    }


    return 0;
    
}