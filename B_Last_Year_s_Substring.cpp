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
        int n;
        string s;
        cin>>n>>s;
        if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[3]=='0')
        cout<<"YES\n";
        else if(s[0]=='2' && s[1]=='0' && s[2]=='2' && s[n-1]=='0')
        cout<<"YES\n";
        else if(s[0]=='2' && s[1]=='0' && s[n-2]=='2' && s[n-1]=='0')
        cout<<"YES\n";
        else if(s[0]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0')
        cout<<"YES\n";
        else if(s[n-4]=='2' && s[n-3]=='0' && s[n-2]=='2' && s[n-1]=='0')
        cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
        
        
        
    }
    

        
        
    
    return 0;  
}