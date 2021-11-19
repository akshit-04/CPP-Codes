#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i, n) for (ll i = 0; i < n; i++)
#define VI vector<int>
#define VL vector<ll>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)

int main()
{
    fast;
    int t = 1;
    //cin>>t;
    while (t--)
    {
        int a, b, x, y;
        cin >> a >> b >> x >> y;
        if (a == b)
            cout << x;
        else if (a > b)
        {
            int ans = 0;
            ans += (a - b) * x;
            cout << min(ans, ((a - b) * y) + x);
        }
        else
        {
            int ans = 0, ans1 = 0;
            ans += x;
            ans += (b - a) * x;
            ans += x;
            ans1 += (b - a) * y;
            ans1 += x;
            cout << min(ans1, ans);
        }
    }
}
