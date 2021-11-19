#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i, n) for (int i = 0; i < n; i++)
#define VI vector<int>
#define VL vector<ll>
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0)
const int MOD = 1000000007;
// char arr[1111][1111];
// int a[101],r[10001],ans[10001];
int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], rem[3];
        rem[0] = 0, rem[1] = 0, rem[2] = 0;
        For(i, n)
        {
            cin >> a[i];
            rem[a[i] % 3]++;
        }
        int k = n / 3, cnt = 0;
        if (rem[0] > k)
        {
            if (rem[1] < k)
            {
                int temp = min(rem[0] - k, k - rem[1]);
                rem[0] -= temp;
                rem[1] += temp;
                cnt += temp;
            }
            if (rem[2] < k)
            {
                int temp1 = min(rem[0] - k, k - rem[2]);
                rem[0] -= temp1;
                rem[2] += temp1;
                cnt += (2 * temp1);
            }
        }
        if (rem[1] > k)
        {
            if (rem[2] < k)
            {
                int temp2 = min(rem[1] - k, k - rem[2]);
                rem[1] -= temp2;
                rem[2] += temp2;
                cnt += temp2;
            }
            if (rem[0] < k)
            {
                int temp = min(rem[1] - k, k - rem[0]);
                rem[1] -= temp;
                rem[0] += temp;
                cnt += (2 * temp);
            }
        }
        if (rem[2] > k)
        {
            if (rem[0] < k)
            {
                int temp = min(rem[2] - k, k - rem[0]);
                rem[2] -= temp;
                rem[0] += temp;
                cnt += temp;
            }
            if (rem[1] < k)
            {
                int temp1 = min(rem[2] - k, k - rem[1]);
                rem[2] -= temp1;
                rem[1] += temp1;
                cnt += (2 * temp1);
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}