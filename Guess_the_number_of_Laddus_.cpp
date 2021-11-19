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
        ll n, k;
        cin >> n >> k;
        ll a[n];
        For(i, n)
        {
            cin >> a[i];
            a[i] *= (1LL * k);
            a[i] =(a[i]+1)/ (i + 1);
        }
        sort(a, a + n);
        cout << a[0] << " " << a[n - 1] << "\n";
    }
}
