#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int N = 1e5+1;
int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n],cnt=1;
        For(i,n)
        cin>>a[i];
        string s;
        cin>>s;
        ll ans=0;
        VI v;
        v.pb(a[0]);
        for(int j=1;j<n;j++)
        {
            if(s[j]==s[j-1])
            {
                v.pb(a[j]);
                cnt++;
            }
            else
            {
                sort(v.begin(),v.end(),greater<int>());
                int temp=min(k,cnt);
                For(i,temp)
                ans+=v[i];
                v.clear();
                v.pb(a[j]);
                cnt=1;
            }
            
        }
        sort(v.begin(),v.end(),greater<int>());
                int temp=min(k,cnt);
                For(i,temp)
                ans+=v[i];
        cout<<ans;

    }
}