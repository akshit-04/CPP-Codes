#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i, n) for (ll i = 0; i < n; i++)
#define VI vector<int>
#define VL vector<ll>
const int MOD = (int)1e6;
int new_mat[MOD + 2], new_mat1[MOD + 2];
int zero[MOD], one[MOD];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
aa:
    while (t--)
    {
        string s;
        cin >> s;
        int n = s.size();
        int present = -1;
        For(i, n)
        {
            if (s[i] == '0')
            {
                for (int j = present + 1; j <= i; j++)
                    zero[j] = i;
                present = i;
            }
        }
        for (int i = present + 1; i < n; i++)
        {
            zero[i] = n;
        }
        if (zero[0] == n)
        {
            cout << "0\n";
            goto aa;
        }
        present = -1;
        For(i, n)
        {
            if (s[i] == '1')
            {
                for (int j = present + 1; j <= i; j++)
                    one[j] = i;
                present = i;
            }
        }
        for (int i = present + 1; i < n; i++)
            one[i] = n;

        new_mat[n] = new_mat[n + 1] = 0;
        new_mat1[n] = new_mat1[n + 1] = 0;

        for (int i = n - 1; i >= 0; --i)
        {
            new_mat[i] = new_mat[i + 1];
            if (s[i] == '0' && one[i] < n)
                new_mat[i] = max(new_mat[i], new_mat[one[i] + 1] + 1);
            if (s[i] == '1' && zero[i] < n)
                new_mat[i] = max(new_mat[i], new_mat[zero[i] + 1] + 1);
            new_mat1[i] = new_mat1[i + 1];
            if (one[i] < n)
                new_mat1[i] = max(new_mat1[i], new_mat[one[i] + 1] + 1);
        }

        int k = new_mat1[0] + 1;
        present = one[0] + 1;
        string res = "1";
        for (int i = 1; i < k; ++i)
        {
            if (present >= n)
            {
                res.push_back('0');
                continue;
            }
            if (zero[present] >= n)
            {
                res.push_back('0');
                present = zero[present] + 1;
                continue;
            }
            if (new_mat[zero[present] + 1] < k - i - 1)
            {
                res.push_back('0');
                present = zero[present] + 1;
            }
            else
            {
                res.push_back('1');
                present = one[present] + 1;
            }
        }
        cout << res << "\n";
    }
}
