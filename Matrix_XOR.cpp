#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i, n) for (int i = 0; i < n; i++)
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        ll a = k + 2, b = k + n + m, c = 0;
        if (n == 1)
        {
            for (int i = 1; i <= m; i++)
                c ^= (k + 1 + i);
            cout << c << "\n";
        }
        else if (c == 1)
        {
            for (int i = 1; i <= n; i++)
                c ^= (k + 1 + i);
            cout << c << "\n";
        }
        else
        {

            if (n % 2 == 0 && m % 2 == 0)
            {
                ll d = k + 2, l = k + n + m;
                c ^= (k + 2);
                c ^= (k + n + m);
                for (int i = 2; i <= min(n, m) / 2; i++)
                {
                    d += 2;
                    l -= 2;
                    c ^= d;
                    c ^= l;
                }
                cout << c << "\n";
            }
            else if (n % 2 && m % 2 && n == m)
            {
                ll d = k;
                For(i, n)
                {
                    d += 2;
                    c ^= d;
                }
                cout << c << "\n";
            }
            else if (n % 2 && m % 2 == 0)
            {
                ll d = k + 4, l = k + m + n - 2; 
                c ^= (k + 2);
                c ^= (k + n + m);
                For(i, m / 2 - 1)
                {
                    c ^= d;
                    d += 2;
                }
                For(i, m / 2 - 1)
                {
                    c ^= l;
                    l -= 2;
                }
                cout << c << "\n";
            }
            else if (n % 2 == 0 && m % 2)
            {
                ll d = k + 4, l = k + m + n - 2;
                c ^= (k + 2);
                c ^= (k + n + m);
                For(i, n / 2 - 1)
                {
                    c ^= d;
                    d += 2;
                }
                For(i, n / 2 - 1)
                {
                    c ^= l;
                    l -= 2;
                }
                cout << c << "\n";
            }
            else
            {

                ll d = k + 2 + 2;
                c ^= (k + 2);
                c ^= (k + n + m);
                For(i, max(n, m) - 2)
                {

                    c ^= d;
                    d++;
                }
                cout << c << "\n";
            }
        }
    }
    return 0;
}
