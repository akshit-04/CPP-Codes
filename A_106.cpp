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
        ll n;
        ll mod=1e18;
        cin>>n;
        ll i=1;
        ll th=1;
        bool flag=false;
        while(th+5<=n)
        {
            th*=3;
            ll f=5;
            int j=1;
            while(th+f<=n)
            {
                if(th+f==n)
                {
                    cout<<i<<" "<<j;
                    flag=true;
                    break;
                }
                j++;
                f*=5;
            }
            if(flag)
            break;
            i++;
        }
        if(flag == 0)
        cout<<-1;
        
    }
    return 0;
    
}