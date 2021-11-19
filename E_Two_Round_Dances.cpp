#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll fact=1,fact1=1,fact2=1;
        for(int i=1;i<=n;i++)
        {
            fact*=i;
        }
        
        
        ll ans=fact/(n*(n/2));
        //ans/=2;
        cout<<ans;



        
        
        

        
    }

    return 0;
    
}