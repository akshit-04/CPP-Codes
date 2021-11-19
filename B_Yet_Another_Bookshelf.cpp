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
        int n;
        cin>>n;
        VI v(n);
        For(i,n)
        cin>>v[i];
        int l,r;
        For(i,n)
        {
            if(v[i]==1)
            {
                l=i;
                break;
            }
        }
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]==1)
            {
                r=i;
                break;
            }
        }
        int ans=0,cnt=0;
        for(int i=l;i<=r;i++)
        {
            if(v[i])
            {
                ans+=cnt;
                cnt=0;
            }
            else
            {
                cnt++;
            }
            
        }
        cout<<ans<<"\n";
        
    }

    return 0;
    
}