#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define loop(i, n) for (ll i = 0; i < n; i++)
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
        ll arr[n][m], count = 0, new_mat[n + 1][m + 1];
        loop(i, n)
        {
            loop(j, m)
            {
                cin >> arr[i][j];
                if (arr[i][j] >= k)
                    count++;
            }
        }
        loop(i, m + 1)
            new_mat[0][i] = 0;
        loop(i, n + 1)
            new_mat[i][0] = 0;
        new_mat[1][1] = arr[0][0];
        for (ll i = 2; i < m + 1; i++)
            new_mat[1][i] = new_mat[1][i - 1] + arr[0][i - 1];
        for (ll i = 2; i < n + 1; i++)
            new_mat[i][1] = new_mat[i - 1][1] + arr[i - 1][0];
        for (ll i = 2; i < n + 1; i++)
        {
            for (ll j = 2; j < m + 1; j++)
                new_mat[i][j] = new_mat[i - 1][j] + new_mat[i][j - 1] - new_mat[i - 1][j - 1] + arr[i - 1][j - 1];
        }

        for (ll x = 2; x <= min(n, m); x++)
        {
            for (ll i = 1; i <= n + 1 - x; i++)
            {
                ll l = 1, r = m + 1 - x, answer = 0;
                while (l <= r)
                {
                    ll mid = l + (r - l) / 2;
                    ll a = i + x - 1, b = mid + x - 1;
                    if ((new_mat[a][b] - new_mat[i - 1][b] - new_mat[a][mid - 1] + new_mat[i - 1][mid - 1]) / (x * x) < k)
                        l = mid + 1;
                    else
                    {
                        r = mid - 1;
                        answer = mid;
                    }
                }
                if (answer)
                    count += (m + 1 - x - r);
            }
        }
        cout << count << "\n";
    }

    return 0;
}