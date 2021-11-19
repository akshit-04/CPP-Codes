#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i, n) for (int i = 0; i < n; i++)
#define VI vector<int>
#define VL vector<ll>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)
int dp[2005][2005], n;
bool isPerfectSquare(int x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0)
    {

        int sr = sqrt(x);

        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
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
        bool flag = false;
        For(i, n)
        {
            cin >> a[i];
            if (!isPerfectSquare(a[i]))
                flag = true;
        }
        if (flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
