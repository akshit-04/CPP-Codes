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
    int t;
    cin >> t;
aa:
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], c[n];
        For(i, n)
        {
            cin >> a[i];
            c[i] = 0;
        }
        For(i, n)
        {
            if (i == 0)
            {
                for (int j = 1; j < n; j++)
                {
                    if (a[j] > a[i])
                        break;
                    if (a[j] == a[i])
                        c[i] += 1;
                }
            }
            else if (i == n - 1)
            {
                for (int j = n - 2; j >= 0; j--)
                {
                    if (a[j] > a[i])
                        break;
                    if (a[j] == a[i])
                        c[i] += 1;
                }
            }
            else
            {
                for (int j = 1; j < n; j++)
                {
                    if (a[j] > a[i])
                        break;
                    if (a[j] == a[i])
                        c[i] += 1;
                }
                for (int j = n - 2; j >= 0; j--)
                {
                    if (a[j] > a[i])
                        break;
                    if (a[j] == a[i])
                        c[i] += 1;
                }
            }
        }
        For(i, n)
                cout
            << c[i] << " ";
        cout << "\n";
    }

    return 0;
}