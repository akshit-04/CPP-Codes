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
        string s;
        cin >> s;
        int n = s.size(), f = 0;
        For(i,n)
        {
            if (s[n - i - 1] != 'a')
            {
                f = 1;
                s.insert(s.begin() + i, 'a');
                break;
            }
        }
        if (f)
            cout << "YES\n"
                 << s << "\n";
        else
            cout << "NO\n";
    }

    return 0;
}