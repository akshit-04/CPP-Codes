#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i, n) for (ll i = 0; i < n; i++)
#define VI vector<int>
#define VL vector<ll>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)
constexpr int MOD = (int)1e6;
int az[MOD + 2], az1[MOD + 2];
int z[MOD], o[MOD];

int main()
{
    fast;
    int t, q, d;
    cin >> t >> q >> d;
    while (t--)
    {
        ll l = (-2LL) * 1e18, r = (2LL) * 1e18, a = l, b = r;
        ll pre = 1LL;
        string s;
        ll mid = (l + r) / 2;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (pre == 1LL)
                cout << pre << " " << mid << " " << a << "\n";
            else
                cout << pre << " " << mid << " " << a << " " << mid << " " << b << "\n";
            cin >> s;
            if (s[0] == 'X')
                pre = 2LL;
            if (s == "O")
                break;
            if (s[0] == 'N')
                l = mid + 1LL;
            if (s[0] == 'P')
                r = mid - 1LL;
        }
    }
}
