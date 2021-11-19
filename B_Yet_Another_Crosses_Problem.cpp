#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int N = 1e5+1;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        For(i,n)
        {
            For(j,m)
            {
                char c;
                cin>>c;
                if(c=='.')
                a[i][j]=0;
                else
                {
                    a[i][j]=1;
                }
                
            }
        }
        int ind1,ind2;
        VI r(n),col(m);
        For(i,n)
        {
            int cnt=0;
            For(j,m)
            {
                if(a[i][j])
                cnt++;
            }
            r[i]=n-cnt;
        }
        For(j,m)
        {
            int cnt=0;
            For(i,n)
            {
                if(a[i][j])
                cnt++;
            }
            col[j]=m-cnt;
        }
        int ans=n*m;
        For(i,n)
        {
            For(j,m)
            {
                if(a[i][j]==0)
                ans=min(ans,r[i]+col[j]-1);
                else
                {
                    ans=min(ans,r[i]+col[j]);
                }
                
            }
        }
        cout<<ans<<"\n";
        
    }
    
}