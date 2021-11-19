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
int fun(int l, int r, int a[])
{
    if (l == r)
        return 0;
    if (dp[l][r] != -1)
        return dp[l][r];
    return dp[l][r] = a[r] - a[l] + min(fun(l, r - 1, a), fun(l + 1, r, a));
}
int main()
{
    fast;
    int t = 1;
    //cin >> t;
    while (t--)
    {
        //int n;
        cin >> n;
        int a[n];
        For(i, n)
                cin >>
            a[i];
        sort(a, a + n);
        memset(dp, -1, sizeof(dp));
        cout << fun(0, n - 1, a) << "\n";
    }
}
