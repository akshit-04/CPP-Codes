#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i, n) for (int i = 0; i < n; i++)
#define VI vector<int>
#define VL vector<ll>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];
int a[101], r[10001], ans[10001];
int f(int a, int b)
{
    if (b == 1)
    {
        return 100000;
    }
    int cnt = 0;
    while (a > 0)
    {
        cnt++;
        a /= b;
    }
    return cnt;
}
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int res = f(a, b);
        for (int i = 1; i < 30; i++)
        {
            res = min(res, f(a, b + i) + i);
        }
        cout << res << '\n';
    }
    return 0;
}