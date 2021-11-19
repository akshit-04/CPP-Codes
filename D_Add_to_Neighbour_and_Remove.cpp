#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i, n) for (int i = 0; i < n; i++)
#define VI vector<int>
#define VL vector<ll>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)
#define pb push_back
const int MOD = 1000000007;
char arr[1111][1111];
int a[101], r[10001], ans[10001];
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        ll s = 0, curr = 0;
        int l = 1;
        For(i, n)
        {
            cin >> a[i];
            s += a[i];
        }
        For(i, n)
        {
            curr += a[i];
            int k = 1;
            if (s % curr == 0)
            {
                ll p = 0;
                for (int j = i + 1; j < n; j++)
                {
                    p += a[j];
                    if (p == curr)
                    {
                        p = 0;
                        k++;
                    }
                }
                if (p == 0)
                    l = max(l, k);
            }
        }
        cout << (n - l) << "\n";
    }

    return 0;
}