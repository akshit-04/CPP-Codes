#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];
//int a[101],r[10001],ans[10001];
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        int minr=INT_MAX,maxr=INT_MIN;
        int minc=INT_MAX,maxc=INT_MIN;
        
        For(i,n)
        {
            string s;
            cin>>s;
            For(j,m)
            {
                a[i][j]=s[j]-'0';
                if(a[i][j])
                {
                    minr=min(j,minr);
                    maxr=max(j,maxr);
                }
            }
        }
        For(j,m)
        {
            For(i,n)
            {
                if(a[i][j])
                {
                    minc=min(i,minc);
                    maxc=max(i,maxc);
                }
            }
        }
        bool flag=true;
        for(int i=minc;i<=maxc;i++)
        {
            for(int j=minr;j<=maxr;j++)
            {
                if(a[i][j]==0)
                {
                    flag=false;
                    break;
                }
            }
        }
        if(flag)
        cout<<"YES\n";
        else
        cout<<"NO\n";
        
    }
    return 0;  
}