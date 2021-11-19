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
        ll a, y, x;
        cin >> a >> y >> x;
        ll tot = a * x;
        tot += 1;
        if (y <= a)
            tot -= 1;
        if (y > a)
        {
            cout << tot << "\n";
            goto aa;
        }
        ll s = a - y;
        tot -= (s * x);
        cout << tot << "\n";
    }

    return 0;
}