#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1e9+7;
//char arr[1111][1111];
//int a[101],r[10001],ans[10001];
// evon byross
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,u,r,d,l,u1,r1,d1,l1;
        cin>>n>>u>>r>>d>>l;
        u1=u,d1=d,r1=r,l1=l;
        if(n-u>=2 && n-r>=2 && n-d>=2 && n-l>=2)
        cout<<"YES\n";
        else
        {
            if(u==n)
            {
                l1--;
                r1--;
            }
            else if(u==n-1)
            (l1>r1)?l1--:r1--;
            if(d==n)
            {
                l1--;
                r1--;
            }
            else if(d==n-1)
            (l1>r1)?l1--:r1--;
            if(r==n)
            {
                u1--;
                d1--;
            }
            else if(r==n-1)
            (u1>d1)?u1--:d1--;
            if(l==n)
            {
                u1--;
                d1--;
            }
            else if(l==n-1)
            (u1>d1)?u1--:d1--;
            if(u1<0 || r1<0 || d1<0 || l1<0)
            cout<<"NO\n";
            else
            {
                cout<<"YES\n";
            }
            
        }
        
        
    }
    return 0;  
}
 