#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i, n) for (int i = 0; i < n; i++)
#define VI vector<int>
#define VL vector<ll>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)
int dp[2005][2005], n;
const int MOD = 1e9 + 7;
ll power(ll x, ll y)
{
    x %= MOD;
    int res = 1;

    while (y)
    {
        if (y & 1)
            res = (res * x) % MOD;
        x = (x * x) % MOD;
        y >>= 1;
    }
    return res;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        ll ans = power(n, k);
        ans %= MOD;
        cout << ans << "\n";
    }
}
