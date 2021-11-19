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
    int t;
    cin>>t;
    while(t--)
    {
        int n,q,ans=0;
        cin>>n>>q;
        VI a(n+2);
        a[0]=a[n+1]=-1;
        for(int i=1;i<=n;i++)
        cin>>a[i];
        for(int i=1;i<=n;i++)
        {
            if(a[i]!=a[i-1])
            ans++;
        }
        while(q--)
        {
            int i,v;
            cin>>i>>v;
            if (a[i] != v) 
            {
		    
    		    if (a[i] == a[i-1] && a[i] == a[i+1]) {
    			    ans+=2;
    		    } 
    		    else if (a[i] == a[i-1]) {
    			    if (a[i+1] != v)
    				    ans++;
    		    } 
    		    else if (a[i] == a[i+1]) {
    			    if (a[i-1] != v)
    				    ans++;
    		    } 
    		    else {
    			    if (a[i-1] == v)
    				    ans--;
    			    if (a[i+1] == v)
    				    ans--;
    		    }
                a[i] = v;
		    }
		    cout << ans << '\n';

        }
    }
        
        
        
        
        
    
    return 0;
    
}