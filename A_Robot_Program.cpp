#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	fast;
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x==0 && y==0)
        cout<<0<<"\n";
        else if(x==0)
        {
            cout<<y+(y-1)<<"\n";
        }
        else if(y==0)
        {
            cout<<x+(x-1)<<"\n";
        }
        else
        {
            int a=max(x,y)-min(x,y);
            int ans=2*min(x,y);
            if(a>0)
            ans+=a+(a-1);
            cout<<ans<<"\n";
        }
        
        
        
        
    }
	return 0;
}
  