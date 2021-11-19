#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i, n) for (int i = 0; i < n; i++)
#define VI vector<int>
#define VL vector<ll>
//int dp[2005][2005], n;
const int MOD = 1e9 + 7;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, h, v;
        cin >> n >> h >> v;
        ll ans = 0, ans1 = 0;
        ans += ((n - 1) * n * h * 1LL);
        ans += (n - 1) * v * 1LL;
        ans1 += ((n - 1) * n * v * 1LL);
        ans1 += (n - 1) * h * 1LL;
        cout << min(ans, ans1) << "\n";
    }
}
