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
aa:
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int pre = 0, pos = 0, cnt = 0;
        VI v;
        For(i, n)
        {
            if (s[i] == 'T')
            {
                cnt++;
                pre++;
            }
            else
            {
                if (pre == 0)
                {
                    cout << "NO\n";
                    goto aa;
                }
                else
                {
                    v.push_back(cnt);
                    //cnt=0;
                    pre--;
                    pos++;
                }
            }
        }
        if (cnt != (v.size() * 2))
        {
            cout << "NO\n";
            goto aa;
        }
        For(i, v.size())
        {
            if (cnt - v[i] - (v.size() - (i + 1)) <= 0)
            {
                cout << "NO\n";
                goto aa;
            }
        }
        cout << "YES\n";
    }
}
