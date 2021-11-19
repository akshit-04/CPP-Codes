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
        ll n,m,ti;
        cin>>n>>m>>ti;
        ll full=n;
        ll temp=0;
        bool flag=false;
        For(i,m)
        {
            ll a,b;
            cin>>a>>b;
            full-=(a-temp);
            if(full<=0)
            {
                full=0;
                flag=true;
            }
            temp=b;
            full+=(b-a);
            if(full>n)
            full=n;

        }
        full-=(ti-temp);
        if(flag || full<=0)
        cout<<"No";
        else
        {
            cout<<"Yes";
        }
        
        
    }
    return 0;  
}