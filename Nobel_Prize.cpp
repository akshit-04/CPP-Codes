#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i, n) for (int i = 0; i < n; i++)
#define VI vector<int>
#define VL vector<ll>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)
const int MOD = 1e5;
int main()
{
    int t;
    cin >> t;
aa:
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int a[n];
        bool b[m + 1];
        For(i, m + 1)
            b[i] = 0;
        For(i, n)
        {
            cin >> a[i];
            b[a[i]] = 1;
        }
        for (int i = 1; i < m + 1; i++)
        {
            if (b[i] == 0)
            {
                cout << "Yes\n";
                goto aa;
            }
        }
        cout << "No\n";
    }

    return 0;
}