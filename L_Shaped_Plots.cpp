#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i, l) for (int i = 0; i < l; i++)
#define VI vector<int>
#define VL vector<ll>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)
const int MOD = 1e9 + 7;

int main()
{
    fast;
    int t;
    cin >> t;
    For(k, t)
    {
        int r, c;
        cin >> r >> c;
        int a[r][c];
        For(i, r)
        {
            For(j, c)
            {
                cin >> a[i][j];
            }
        }
        ll ans = 0;
        For(i, r)
        {
            For(j, c)
            {
                if (a[i][j] == 0)
                    continue;
                if (i == 0)
                {
                    if (j == 0)
                    {
                        int cnt = 1, cnt1 = 1;
                        for (int n = i + 1; n < r; n++)
                        {
                            if (a[n][j])
                                cnt++;
                            else
                            {
                                break;
                            }
                        }

                        for (int n = j + 1; n < c; n++)
                        {
                            if (a[i][n])
                                cnt1++;
                            else
                            {
                                break;
                            }
                        }
                        for (int n = 2; n <= cnt; n++)
                        {
                            if (2 * n <= cnt1)
                                ans++;
                        }
                        for (int n = 2; n <= cnt1; n++)
                        {
                            if (2 * n <= cnt)
                                ans++;
                        }
                    }
                    else if (j == c - 1)
                    {
                        int cnt = 1, cnt1 = 1;
                        for (int n = i + 1; n < r; n++)
                        {
                            if (a[n][j])
                                cnt++;
                            else
                            {
                                break;
                            }
                        }

                        for (int n = j - 1; n >= 0; n--)
                        {
                            if (a[i][n])
                                cnt1++;
                            else
                            {
                                break;
                            }
                        }

                        for (int n = 2; n <= cnt; n++)
                        {
                            if (2 * n <= cnt1)
                                ans++;
                        }
                        for (int n = 2; n <= cnt1; n++)
                        {
                            if (2 * n <= cnt)
                                ans++;
                        }
                    }
                    else
                    {
                        int h = 1, b = 1, c = 1;
                        for (int n = i + 1; n < r; n++)
                        {
                            if (a[n][j])
                                h++;
                            else
                            {
                                break;
                            }
                        }

                        for (int n = j - 1; n >= 0; n--)
                        {
                            if (a[i][n])
                                b++;
                            else
                            {
                                break;
                            }
                        }
                        for (int n = j + 1; n < c; n++)
                        {
                            if (a[i][n])
                                c++;
                            else
                            {
                                break;
                            }
                        }
                        for (int n = 2; n <= h; n++)
                        {
                            if (2 * n <= b)
                                ans++;
                            if (2 * n <= c)
                                ans++;
                        }
                        for (int n = 2; n <= b; n++)
                        {
                            if (2 * n <= h)
                                ans++;
                        }
                        for (int n = 2; n <= c; n++)
                        {
                            if (2 * n <= h)
                                ans++;
                        }
                    }
                }
                else if (i == r - 1)
                {
                    if (j == 0)
                    {
                        int cnt = 1, cnt1 = 1;
                        for (int n = i - 1; n >= 0; n--)
                        {
                            if (a[n][j])
                                cnt++;
                            else
                            {
                                break;
                            }
                        }

                        for (int n = j + 1; n < c; n++)
                        {
                            if (a[i][n])
                                cnt1++;
                            else
                            {
                                break;
                            }
                        }
                        for (int n = 2; n <= cnt; n++)
                        {
                            if (2 * n <= cnt1)
                                ans++;
                        }
                        for (int n = 2; n <= cnt1; n++)
                        {
                            if (2 * n <= cnt)
                                ans++;
                        }
                    }
                    else if (j == c - 1)
                    {
                        int cnt = 1, cnt1 = 1;
                        for (int n = i - 1; n >= 0; n--)
                        {
                            if (a[n][j])
                                cnt++;
                            else
                            {
                                break;
                            }
                        }

                        for (int n = j - 1; n >= 0; n--)
                        {
                            if (a[i][n])
                                cnt1++;
                            else
                            {
                                break;
                            }
                        }

                        for (int n = 2; n <= cnt; n++)
                        {
                            if (2 * n <= cnt1)
                                ans++;
                        }
                        for (int n = 2; n <= cnt1; n++)
                        {
                            if (2 * n <= cnt)
                                ans++;
                        }
                    }
                    else
                    {
                        int h = 1, b = 1, c = 1;
                        for (int n = i - 1; n >= 0; n--)
                        {
                            if (a[n][j])
                                h++;
                            else
                            {
                                break;
                            }
                        }

                        for (int n = j - 1; n >= 0; n--)
                        {
                            if (a[i][n])
                                b++;
                            else
                            {
                                break;
                            }
                        }
                        for (int n = j + 1; n < c; n++)
                        {
                            if (a[i][n])
                                c++;
                            else
                            {
                                break;
                            }
                        }
                        for (int n = 2; n <= h; n++)
                        {
                            if (2 * n <= b)
                                ans++;
                            if (2 * n <= c)
                                ans++;
                        }
                        for (int n = 2; n <= b; n++)
                        {
                            if (2 * n <= h)
                                ans++;
                        }
                        for (int n = 2; n <= c; n++)
                        {
                            if (2 * n <= h)
                                ans++;
                        }
                    }
                }
                else if (j == 0)
                {
                    int h = 1, b = 1, c = 1;
                    for (int n = j + 1; n < c; n++)
                    {
                        if (a[i][n])
                            h++;
                        else
                        {
                            break;
                        }
                    }

                    for (int n = i - 1; n >= 0; n--)
                    {
                        if (a[n][j])
                            b++;
                        else
                        {
                            break;
                        }
                    }
                    for (int n = i + 1; n < r; n++)
                    {
                        if (a[n][j])
                            c++;
                        else
                        {
                            break;
                        }
                    }
                    for (int n = 2; n <= h; n++)
                    {
                        if (2 * n <= b)
                            ans++;
                        if (2 * n <= c)
                            ans++;
                    }
                    for (int n = 2; n <= b; n++)
                    {
                        if (2 * n <= h)
                            ans++;
                    }
                    for (int n = 2; n <= c; n++)
                    {
                        if (2 * n <= h)
                            ans++;
                    }
                }
                else if (j == c - 1)
                {
                    int h = 1, b = 1, c = 1;
                    for (int n = j - 1; n >= 0; n--)
                    {
                        if (a[i][n])
                            h++;
                        else
                        {
                            break;
                        }
                    }

                    for (int n = i - 1; n >= 0; n--)
                    {
                        if (a[n][j])
                            b++;
                        else
                        {
                            break;
                        }
                    }
                    for (int n = i + 1; n < r; n++)
                    {
                        if (a[n][j])
                            c++;
                        else
                        {
                            break;
                        }
                    }
                    for (int n = 2; n <= h; n++)
                    {
                        if (2 * n <= b)
                            ans++;
                        if (2 * n <= c)
                            ans++;
                    }
                    for (int n = 2; n <= b; n++)
                    {
                        if (2 * n <= h)
                            ans++;
                    }
                    for (int n = 2; n <= c; n++)
                    {
                        if (2 * n <= h)
                            ans++;
                    }
                }
                else
                {
                    int h = 1, b = 1, c = 1, d = 1;
                    for (int n = j - 1; n >= 0; n--)
                    {
                        if (a[i][n])
                            h++;
                        else
                        {
                            break;
                        }
                    }
                    for (int n = i - 1; n >= 0; n--)
                    {
                        if (a[n][j])
                            b++;
                        else
                        {
                            break;
                        }
                    }
                    for (int n = j + 1; n < c; n++)
                    {
                        if (a[i][n])
                            c++;
                        else
                        {
                            break;
                        }
                    }
                    for (int n = i + 1; n < r; n++)
                    {
                        if (a[n][j])
                            d++;
                        else
                        {
                            break;
                        }
                    }
                    for (int n = 2; n <= h; n++)
                    {
                        if (n * 2 <= b)
                            ans++;
                        if (n * 2 <= d)
                            ans++;
                    }
                    for (int n = 2; n <= b; n++)
                    {
                        if (n * 2 <= c)
                            ans++;
                        if (n * 2 <= h)
                            ans++;
                    }
                    for (int n = 2; n <= c; n++)
                    {
                        if (n * 2 <= b)
                            ans++;
                        if (n * 2 <= d)
                            ans++;
                    }
                    for (int n = 2; n <= d; n++)
                    {
                        if (n * 2 <= h)
                            ans++;
                        if (n * 2 <= c)
                            ans++;
                    }
                }
            }
        }
        cout << "Case #" << k + 1 << ": " << ans << "\n";
    }
    return 0;
}
