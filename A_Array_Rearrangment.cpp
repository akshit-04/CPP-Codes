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
    aa:while(t--)
    {
        int n,x;
        cin>>n>>x;
        VI a(n),b(n);
        For(i,n)
        cin>>a[i];
        For(i,n)
        cin>>b[i];
        sort(b.begin(),b.end(),greater<int>());
        For(i,n)
        {
            if(a[i]+b[i]>x)
            {
                cout<<"No\n";
                goto aa;
            }
        }
        cout<<"Yes\n";
        
        
        
        
        
    }
    return 0;
    
}