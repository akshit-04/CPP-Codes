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
    int t = 1;
    //cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], z[n + 1], one[n + 1];
        For(i, n)
                cin >>
            a[i];
        int x, y, cnt = 0, cnt1 = 0;
        z[0] = 0, one[0] = 0;
        cin >> x >> y;
        For(i, n)
        {
            if (a[i] == 0)
            {
                cnt++;
                z[i + 1] = cnt;
                one[i + 1] = cnt1;
            }
            else
            {
                z[i + 1] = cnt;
                cnt1++;
                one[i + 1] = cnt1;
            }
        }
        int ans = 0;
        For(i, n)
        {
            for (int j = i; j < n; j++)
            {
                if (one[j + 1] - one[i] > y && z[j + 1] - z[i] > x)
                    ans++;
            }
        }
        cout << ans << "\n";
    }
}
