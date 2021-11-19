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
    int t=1;
    //cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        vector<pair<char,int>> v;
        int n=s.size();
        v.pb({'R',n-1});
        v.pb({'L',2});
        v.pb({'R',2});
        n+=n+2;
        v.pb({'R',n-1});
        cout<<4<<"\n";
        For(i,v.size()) 
        cout<<v[i].first<<' '<<v[i].second<<endl;
    }


    return 0;
    
}