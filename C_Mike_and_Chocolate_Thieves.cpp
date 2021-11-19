#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=3;i<n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
ll checkfun(ll x) 
{
    ll ans = 0;
    for (int i = 2;1ll * i * i * i <= x;++i)
        ans += x / (1ll * i * i * i);
    return ans;
}
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
        ll left = 8, right = 1e16, n;
        cin >> n;
        while (left < right) 
        {
            ll mid = (left + right) / 2;
            if (checkfun(mid) < n)
            left = mid + 1;
            else
            right = mid;
        }
        if (checkfun(left)==n)
        cout << left;
        else
        cout << -1;
        

    }
    return 0;
    
}