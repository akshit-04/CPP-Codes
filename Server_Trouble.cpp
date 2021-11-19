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
        int n, k;
        cin >> n >> k;
        if (n == k)
        {
            cout << 1 << " " << n << "\n";
            goto aa;
        }
        if (n % 2 == 0)
        {
            k-=2;
            if(k%2\==0)
            {

            }
        }
        else
        {
            k--;
            if (k > n / 2)
                cout << (n / 2) << " " << (k / 2) + 1 << "\n";
            else
            cout<<
        }
    }

    return 0;
}