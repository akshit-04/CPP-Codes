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
        int n,k;
        cin>>n>>k;
        int a[n];
        For(i,n)
        cin>>a[i];
        sort(a,a+n);
        if(a[0]+a[1]<=k)
        cout<<"YES\n";
        else
        {
            if(a[n-1]<=k)
            cout<<"YES\n";
            else
            {
                cout<<"NO\n";
            }
            
        }
        
        
    }
    
}