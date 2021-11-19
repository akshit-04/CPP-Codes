#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];
int l[10001],r[10001],ans[10001];
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string s[101];
        For(i,n)
        {
            cin>>s[i];
            bool k=0;
            For(j,m)
            {
                if (s[i][j]=='1') 
                {
                    k=1;
                    break;
                }
            }
            if(!k) 
            {
                cout<<-1;
                return 0;
            }
        }
        For(i,n)
        {
            int ma=-1,mi=1e5;
            For(j,m)
            {
                if(s[i][j]=='1')
                {
                    ma=max(ma,j); 
                    mi=min(mi,j);
                }
            }
            int p=m-ma;
            For(j,m)
            {
                if(s[i][j]=='1') 
                    p=0;
                l[j]=p++;
            }
            p=mi+1;
            for (int j=m-1;j>=0;j--)
            {
                if(s[i][j]=='1') 
                    p=0;
                r[j]=p++;
            }
            For(j,m)
                ans[j]+=min(l[j],r[j]);
        }
        cout<<*min_element(ans,ans+m);
    }
    return 0;  
}