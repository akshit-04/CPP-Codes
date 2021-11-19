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
        int n,c;
        cin>>n>>c;
        string s;
        cin>>s;
        int cnt=0,ans=0;
        For(i,n)
        {
            if(s[i]=='1')
            {
                if(cnt>c)
                ans++;
                cnt=0;
            }
            else
            {
                cnt++;
            }
            
        }
        if(ans>1)
        cout<<"NO\n";
        else
        {
            cout<<"YES\n";
        }
        
        
    }
    return 0;  
}
 