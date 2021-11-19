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
        ll n,k,s;
        cin>>n>>k>>s;
        if((n-1)*k<s || k>s)
        {
            cout<<"NO";
            return 0;
        }
        cout<<"YES\n";
        ll move=s/k, cnt=s%k, p=1;
        For(i,cnt)
        {
            if(p+move+1<=n)
                p+=move+1;
            else
            {
                p-=move+1;
            }
            cout<<p<<" ";
            
        }
        For(i,k-cnt)
        {
            if(p+move<=n)
                p+=move;
            else
            {
                p-=move;
            }
            cout<<p<<" ";
        }

    }
    return 0;  
}