#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int MOD = 1000000007;
char arr[1111][1111];
int a[101],r[10001],ans[10001];
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=0,y=0;
        cin>>n;
        string s,p;
        cin>>s>>p;
        int cnt=0;
        For(i,n)
        {
            cnt+=(int)(s[i]-'0');
            cnt-=(int)(p[i]-'0');
            if(cnt<0)
            break;
        }
        cout<<(cnt==0 ? "Yes\n" : "No\n");
        
        
    }
    
    return 0;  
}