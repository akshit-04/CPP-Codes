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
aa:
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        For(i, n)
                cin >>
            a[i];
        int pre[n], suf[n];
        int first = 0, second = 0;
        For(i, n)
        {
            first = first ^ a[i];
            second = second ^ a[n - i - 1];
            pre[i] = first;
            suf[n - i - 1] = second;
        }
        map<int, int> map;
        For(i, n - 1)
        {
            map[pre[i]]++;
            if (pre[i] == suf[i + 1])
            {
                cout << "YES\n";
                goto aa;
            }
            if (map[suf[i+1]] >= 1 && pre[i] == 0)
            {
                cout << "YES\n";
                goto aa;
            }
        }
        cout << "NO\n";
    }
}
