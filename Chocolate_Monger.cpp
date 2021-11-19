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
        ll n, x;
        cin >> n >> x;
        int a[n];
        map<int, int> map;
        For(i, n)
        {
            cin >> a[i];
            map[a[i]]++;
        }
        if (n - map.size() >= x)
            cout << map.size() << "\n";
        else
        {
            cout << (map.size() - (x - (n - map.size()))) << "\n";
        }
    }
}
