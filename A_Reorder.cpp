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
        int n,m;
        int ans=0;
        cin>>n>>m;
        VI a(n+1);
        For(i,n)
        {
            cin>>a[i];
            ans+=a[i];
        }
        
        /*sort(a.begin(),a.end());
        bool flag=true;
        For(i,n)
        {
            for(int j=i;j<=n;j++)
            {
                ans+=(double)(a[j]/(double)j);
                //cout<<(double)(a[j]/j)<<" ";
            }
            
        }*/
        if(ans==m)
        cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
        
        
    }
    return 0;
    
}