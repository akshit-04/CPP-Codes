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
//char arr[1111][1111];
//int a[101],r[10001],ans[10001];
// evon byross
int main()
{
    fast;
    int t;
    cin >> t;
aa:
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        VI a(n);
        ll tot=0;
        For(i, n)
        {
            cin>>a[i];
            tot+=a[i];
        }
        ll sum = 0, cnt = 0, cnt1 = 0,m=0;
        bool flag = false;
        if(n==1 || tot<2*k)
        {
            cout<<-1<<"\n";
            goto aa;
        }
        sort(a.begin(), a.end(), greater<int>());
        while(sum<2*k)
        {
            sum+=a[m];
            m++;
            cnt++;
        }
        bool dp[m+1][sum-k+1];
        For(i,m+1)
        dp[i][0]=true;
        For(i,sum-k+1)
        dp[0][i]=false;
        for(int i=1;i<=m;i++)
        {
            for(int j=1;i<=sum-k;j++)
            {
                if(j<a[i-1])
                dp[i][j]=dp[i-1][j];
                else
                dp[i][j]=dp[i-1][j] || dp[i-1][j-a[i-1]];
            }
        }
        int end=-1;
        For(i,sum-k+1)
        {
            if(dp[m][i])
            end=i;
        }
        int i=0;
        while(i<n&&end<k)
        {
            end+=a[i];
            i++;
            cnt++;
        }
        if(end>=k) cout<<cnt<<endl;
            else cout<<-1<<endl;
        
    }
    return 0;
}
