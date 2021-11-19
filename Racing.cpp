#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i, n) for (int i = 0; i < n; i++)
#define VI vector<int>
#define VL vector<ll>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)
const int MOD = 1e9 + 7;
int main()
{
    int t;
    cin >> t;
aa:
    while (t--)
    {
        ll x, r, m;
        cin >> x >> r >> m;
        r *= 60;
        m *= 60;
        if (r > m)
            cout << "NO\n";
        else if (r == m && x >= r)
            cout << "YES\n";
        else
        {
            ll a = m - r;
            if (x >= r || x + a >= r)
                cout << "YES\n";
            else
                cout << "NO\n";
        }
    }

    return 0;
}