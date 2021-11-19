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
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, q;
        cin >> n >> q;
        ll a[n];
        For(i, n)
                cin >>
            a[i];
        int bit[31] = {0};
        For(i, n)
        {
            For(j, 31)
            {
                ll x = 1 << j;
                if (a[i] & x)
                    bit[j]++;
            }
        }
        ll ans = 0;
        For(i, 31)
        {
            ll x = 1 << i;
            if (bit[i])
                ans += x;
        }
        cout << ans << "\n";
        while (q--)
        {
            ll ind, k;
            cin >> ind >> k;
            For(i, 31)
            {
                ll x = 1 << i;
                if (a[ind - 1] & x)
                    bit[i] -= 1;
            }
            For(i, 31)
            {
                ll x = 1 << i;
                if (k & x)
                    bit[i] += 1;
            }
            a[ind - 1] = k;
            ll ans = 0;
            For(i, 31)
            {
                ll x = 1 << i;
                if (bit[i] > 0)
                    ans += x;
            }
            cout << ans << "\n";
        }
    }
}
