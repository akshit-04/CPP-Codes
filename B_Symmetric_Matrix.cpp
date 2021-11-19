#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        bool flag=false;
        For(i,n)
        {
            int a,b,c,d;
            cin>>a>>b>>c>>d;
            if(a==b==c==d||(a==d&&b==c)||(b==c))
            flag=true;
        }
        if(m%2)
        cout<<"NO\n";
        else if(flag)
        cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
        
    }

    return 0;
    
}