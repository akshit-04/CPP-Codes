#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i, n) for (ll i = 0; i < n; i++)
#define VI vector<int>
#define VL vector<ll>
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        vector<ll> g(n), u(m), v(m), d(m), ans;
        For(i, n)
                cin >>
            g[i];
        For(i, m)
        {
            cin >> u[i] >> v[i] >> d[i];
            u[i]--;
            v[i]--;
        }
        For(i, (1LL << n))
        {
            ll ar[n] = {0LL};
            ll curr = 0LL;
            For(j, n)
            {
                if (i & (1LL << j))
                {
                    ar[j] = 1LL;
                    curr += g[j];
                }
            }
            For(j, m)
            {
                bool flag = true;
                for (int k = u[j]; k <= v[j]; k++)
                {
                    if (ar[k] != 1)
                    {
                        flag = false;
                        break;
                    }
                }
                if (flag)
                    curr += d[j];
            }
            ans.push_back(curr);
        }
        sort(ans.begin(), ans.end());
        curr = ans.size() - 1;
        ll cnt = 0;
        while (cnt != k)
        {
            cout << ans[curr] << " ";
            curr--;
            cnt++;
        }
        cout << "\n";
    }

    return 0;
}
