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
        string s;
        cin>>s;
        int n=s.size(),ans=0;
        vector<bool> used(n);
        For(i,n)
        {
            if(used[i])
            continue;
            if(i<n-2 && s[i]==s[i+2])
            {
                used[i]=1;
                used[i+2]=1;
                ans++;
            }
            if(i<n-1 && s[i]==s[i+1])
            {
                used[i]=1;
                used[i+1]=1;
                ans++;
            }
        }
        cout<<ans<<"\n";
    }
    
    return 0;  
}