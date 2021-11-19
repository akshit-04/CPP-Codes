#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
const int mx=1e3+7;
char arr[1111][1111];
//int a[101],r[10001],ans[10001];
int pr[mx][mx],n,m,cnt0=0;
string s[mx];
bool check(int len,int no)
{
    For(i,n-len+1)
    {
        For(j,m-len+1)
        {
            int cnt1;
            if(i==0 && j==0)
            cnt1=pr[i+len-1][j+len-1];
            else if(j==0)
            cnt1=pr[i+len-1][j+len-1]-pr[i+len-1][j-1];
            else if(j==0)
            cnt1=pr[i+len-1][j+len-1]-pr[i-1][j+len-1];
            else
            {
                cnt1=pr[i+len-1][j+len-1]-pr[i-1][j+len-1]-pr[i+len-1][j-1]+pr[i-1][j-1];
            }
            if(cnt1<=no)
            {
                int ans=len*len;
                ans-=cnt1;
                int cnt=cnt0-ans;
                if(cnt>=cnt1)
                return true;

            }
            // return true;
            
        }
    }
    return false;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>n>>m>>k;
        For(i,n)
        cin>>s[i];
        
        For(i,n)
        {
            For(j,m)
            {
                if(s[i][j]=='0')
                cnt0++;
                if(s[i][j]=='1')
                pr[i][j]=1;
                if(i==0 && j==0)
                continue;
                else if(i==0)
                pr[i][j]+=pr[i][j-1];
                else if(j==0)
                pr[i][j]+=pr[i-1][j];
                else
                {
                    pr[i][j]+=pr[i-1][j]+pr[i][j-1]-pr[i-1][j-1];
                }
                
            }
        }
        if(cnt0==0)
        cout<<0<<"\n";
        else
        {
            int l=1,r=sqrt(cnt0)+1;
            while(r-l>1)
            {
                int mid=l+(r-l)/2;
                if(check(mid,k))
                l=mid;
                else
                {
                    r=mid;
                }
                

            }
            cout<<l<<"\n";
        }
        
        

    }
    return 0;  
}