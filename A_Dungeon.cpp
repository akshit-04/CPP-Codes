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
        int a,b,c;
        cin>>a>>b>>c;
        if(a==0 || b==0 || c==0)
        cout<<"NO\n";
        else
        {
            ll k=a+b+c;
            if(k%9 || k/9>min(a,min(b,c)))
            cout<<"NO\n";
            else
            {
                cout<<"YES\n";
            }
            
            
        }
        
        
        
        
        
        
        
    }
    

        
        
    
    return 0;  
}