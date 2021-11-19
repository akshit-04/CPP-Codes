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
        ll n;
        cin>>n;
        if(n==1 || n==2)
        cout<<"NO\n";
        else
        {
            while(n%2==0)
            {
                n/=2;
            }
            if(n==1)
            cout<<"NO\n";
            else if(n%2)
            cout<<"YES\n";
            else
            {
                cout<<"NO\n";
            }
            
        }
        
        
        
    }
}