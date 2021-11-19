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
    while (t--)
    {
        int r, o, c;
        cin >> r >> o >> c;
        int a = 20 - o;
        if (a * 6 * 6 >= (r - c))
            cout << "YES\n";
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}