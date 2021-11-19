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
        int a[n], b[m];
        For(i, n)
                cin >>
            a[i];
        For(i, m)
                cin >>
            b[i];

        int j = 0, i = 0;
        bool k = 0;
        ll cnt = 0;
        while (i < n && j < m)
        {
            if (!k)
            {
                if (a[i] < b[j])
                {
                    i++;
                }
                else
                {
                    cnt++;
                    k = 1;
                    j++;
                }
            }
            else
            {
                if (b[j] < a[i])
                {
                    j++;
                }
                else
                {
                    cnt++;
                    k = 0;
                    i++;
                }
            }
        }
        cout << cnt << "\n";
    }

    return 0;
}