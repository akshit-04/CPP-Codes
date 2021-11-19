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
        // new line
        int n, x;
        cin >> n >> x;
        if (x == 0 && n % 2 == 1)
        {
            cout << -1 << endl;
            continue;
        }
        if (n <= x)
        {
            cout << 1 << endl;
            continue;
        }
        int ans = 0;
        int i = 29;
        while (n > x)
        {
            int g = 1 << i;
            if (g > n)
                i -= 2;
            else
            {
                n -= g;
                ans++;
            }
        }
        if (n > 0)
            ans++;
        cout << ans << endl;
    }
}
