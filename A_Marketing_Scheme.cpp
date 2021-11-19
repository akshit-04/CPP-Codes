#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=1;i<=n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l>>r;
        
        if(l%(r+1)>=(double)(r+1)/(double)(2))
        cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
        
        
    }
    return 0;
    
}