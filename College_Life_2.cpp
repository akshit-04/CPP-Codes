#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1e9+7;
char arr[1111][1111];
//int a[101],r[10001],ans[10001];
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int d[n];
        ll sum=0;
        For(i,n)
        {
            cin>>d[i];
            sum+=d[i];
        }
        For(i,n)
        {
            int e;
            cin>>e;
            For(j,e)
            {
                int l;
                cin>>l;
                sum+=l-d[i];
            }
            sum-=(d[i]*(e-1)*1LL);
        }
        cout<<sum<<"\n";
    }
    return 0;  
}
 