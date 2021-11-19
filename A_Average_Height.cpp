#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i, n) for (ll i = 0; i < n; i++)
#define VI vector<int>
#define VL vector<ll>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)

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
        For(i, n)
                cin >>
            a[i];
        For(i, n)
        {
            if (a[i] % 2)
                cout << a[i] << " ";
        }
        For(i, n)
        {
            if (a[i] % 2 == 0)
                cout << a[i] << " ";
        }
        cout << "\n";
    }
}
