#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i, n) for (int i = 0; i < n; i++)
#define VI vector<int>
#define VL vector<ll>
#define pb push_back
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)
const int MOD = 1e9 + 7;
char arr[1111][1111];
//int a[101],r[10001],ans[10001];
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
            cin >> a[i];
        stack<ll> stk;
        set<ll> uniq;
        For (i, n)
        {
            while (!stk.empty())
            {
                if (stk.top() <= a[i])
                {
                    uniq.insert(a[i] - stk.top());
                    stk.pop();
                }
                else
                {
                    break;
                }
            }
            if (!stk.empty())
            {
                uniq.insert(stk.top() - a[i]);
            }
            stk.push(a[i]);
        }
        cout << uniq.size() << endl;
    }
    return 0;
}
