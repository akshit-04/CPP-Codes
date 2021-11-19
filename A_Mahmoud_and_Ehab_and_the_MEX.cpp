#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];
int a[101],r[10001],ans[10001];
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n,x,cnt=0;
        cin>>n>>x;
        For(i,n)
        {
            int k;
            cin>>k;
            a[k]=1;
        }
        For(i,x)
        {
            if(!a[i])
                cnt++;
        }
        if(a[x])
        cnt++;
        cout<<cnt;
    }
    return 0;  
}