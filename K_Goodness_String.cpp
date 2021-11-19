#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i, n) for (int i = 0; i < n; i++)
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
        bool a[r][c];
        For(i, r)
        {
            For(j, c)
            {
                cin >> a[i][j];
            }
        }
        For(i, r)
        {
            For(j, c)
            {
                if (!a[i][j])
                    continue;
                if (i == 0)
                {
                    if (j == 0)
                    {
                        int cnt = 1, cnt1 = 1;
                        for (int n = i + 1; n < r; n++)
                        {
                            if (a[n][0])
                                cnt++;
                            else
                            {
                                break;
                            }
                        }

                        for (int n = j + 1; n < c; n++)
                        {
                            if (a[0][n])
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
                        int a = 1, b = 1,c=1;
                        for (int n = i + 1; n < r; n++)
                        {
                            if (a[n][j])
                                a++;
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
                        for(int n=2;n<=a;n++)
                        {
                            if(2*n<=b)
                            ans++;
                            if(2*n<=c)
                            ans++;
                        }
                        for(int n=2;n<=b;n++)
                        {
                            if(2*n<=a)
                            ans++;
                        }
                        for (int n = 2; n <= c; n++)
                        {
                            if (2 * n <= a)
                                ans++;
                        }
                    }
                }
                else if(i==r-1)
                {
                    if (j == 0)
                    {
                        int cnt = 1, cnt1 = 1;
                        for (int n = i - 1; n >=0; n--)
                        {
                            if (a[n][0])
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
                        for (int n = i - 1; n >=0; n--)
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
                        int a = 1, b = 1, c = 1;
                        for (int n = i - 1; n >=0; n--)
                        {
                            if (a[n][0])
                                a++;
                            else
                            {
                                break;
                            }
                        }

                        for (int n = j - 1; n >= 0; n--)
                        {
                            if (a[0][n])
                                b++;
                            else
                            {
                                break;
                            }
                        }
                        for (int n = j + 1; n < c; n++)
                        {
                            if (a[0][n])
                                c++;
                            else
                            {
                                break;
                            }
                        }
                        for (int n = 2; n <= a; n++)
                        {
                            if (2 * n <= b)
                                ans++;
                            if (2 * n <= c)
                                ans++;
                        }
                        for (int n = 2; n <= b; n++)
                        {
                            if (2 * n <= a)
                                ans++;
                        }
                        for (int n = 2; n <= c; n++)
                        {
                            if (2 * n <= a)
                                ans++;
                        }
                    }
                }
                else if(j==0)
                {
                    int a = 1, b = 1, c = 1;
                    for (int n = j + 1; n < c; n++)
                    {
                        if (a[i][n])
                            a++;
                        else
                        {
                            break;
                        }
                    }

                    for (int n = i - 1; n >= 0; n--)
                    {
                        if (a[n][0])
                            b++;
                        else
                        {
                            break;
                        }
                    }
                    for (int n = i + 1; n < r; n++)
                    {
                        if (a[n][0])
                            c++;
                        else
                        {
                            break;
                        }
                    }
                    for (int n = 2; n <= a; n++)
                    {
                        if (2 * n <= b)
                            ans++;
                        if (2 * n <= c)
                            ans++;
                    }
                    for (int n = 2; n <= b; n++)
                    {
                        if (2 * n <= a)
                            ans++;
                    }
                    for (int n = 2; n <= c; n++)
                    {
                        if (2 * n <= a)
                            ans++;
                    }
                
                }
                else if(j==c-1)
                {
                    int a = 1, b = 1, c = 1;
                    for (int n = i - 1; n >= 0; n--)
                    {
                        if (a[n][j])
                            a++;
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
                    for (int n = 2; n <= a; n++)
                    {
                        if (2 * n <= b)
                            ans++;
                        if (2 * n <= c)
                            ans++;
                    }
                    for (int n = 2; n <= b; n++)
                    {
                        if (2 * n <= a)
                            ans++;
                    }
                    for (int n = 2; n <= c; n++)
                    {
                        if (2 * n <= a)
                            ans++;
                    }
                
                }

            }
        }
    }
    return 0;
}
