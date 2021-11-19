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
    string a,b;
    cin>>a>>b;
    ll i=0;
    ll ans=0;
    while(i<a.size())
    {
        if(i+2<a.size() && a[i]=='0' && b[i]=='0' && a[i+1]=='0' && b[i+1]=='0' && a[i+2]=='0' && b[i+2]=='0')
        {
            ans+=2;
            i+=2;
        }
        else if(a[i]=='0' && b[i]=='0' && a[i+1]=='0')
        {
            ans++;
            i++;
        }
        else if(a[i]=='0' && b[i]=='0' && b[i+1]=='0')
        {
            ans++;
            i++;
        }
        else if(a[i]=='0' && b[i+1]=='0' && a[i+1]=='0')
        {
            ans++;
            i++;
        }
        else if(b[i]=='0' && b[i+1]=='0' && a[i+1]=='0')
        {
            ans++;
            i++;
        }
        i++;
    }
    cout<<ans;
}