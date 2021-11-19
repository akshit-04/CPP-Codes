#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int n = 1e6;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        if(n==k)
        cout<<1<<"\n";
        else
        {
            if(k>n)
            {
                ll j=(k+n-1)/n;
                cout<<j<<"\n";
            }
            else
            {
                ll j=(n+k-1)/k;
                //j++;
                k*=j;
                ll i=(k+n-1)/n;
                cout<<i<<"\n";
            }
            
        }
        
    }
}