#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=1;i<=n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int N = 1000010;
char arr[1111][1111];
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        ll a[n][m],ans=0;
        For(i,n)
            For(j,m)
                cin>>a[i][j];
        For(i,n/2)
        {
            For(j,m/2)
            {
                ll mx=max(a[i][j],max(a[n-i+1][j],max(a[i][m-j+1],a[n-i+1][m-j+1])));
                ll mn=min(a[i][j],min(a[n-i+1][j],min(a[i][m-j+1],a[n-i+1][m-j+1])));
                ll temp=(mx+mn)/2;
                ans+=(abs(a[i][j]-temp)+abs(a[n-i+1][j]-temp)+abs(a[i][m-j+1]-temp)+abs(a[n-i+1][m-j+1]-temp));

            }
        }
        bool flag=false;
        if(n%2)
        {
            flag=true;
            ll mX=0;
            ll mN=1e9;
            For(j,m)
            {
                mX=max(a[(n/2)+1][j],mX);
                mN=min(a[(n/2)+1][j],mN);
            }
            ll k=(mX+mN)/2;
            For(j,m)
            {
                if(m%2 && j==(m/2)+1)
                continue;
                else
                {
                    ans+=abs(a[(n/2)+1][j]-k);
                }
                
                
            }
        }
        if(m%2)
        {
            ll mX=0;
            ll mN=1e9;
            For(i,n)
            {
                mX=max(a[i][(m/2)+1],mX);
                mN=min(a[i][(m/2)+1],mN);
            }
            ll k=(mX+mN)/2;
            For(i,n)
            {
                if(flag && i==(n/2)+1)
                continue;
                else
                {
                    ans+=abs(a[i][(m/2)+1]-k);
                }
                
                
            }
        }
        cout<<ans<<"\n";
    }
    
    
    
    
  
    
    
}