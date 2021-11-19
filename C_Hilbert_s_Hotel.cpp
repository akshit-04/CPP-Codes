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
        VI a(n),v;
        For(i,n)
        cin>>a[i];
        For(i,n)
        {
            a[i]+=i;
            if(a[i]>=0)
            v.pb(a[i]%n);
            else
            {
                v.pb((n+a[i]%n)%n);
            }
            
        }
        bool flag = true;
        sort(v.begin(),v.end());
        For(i,n)
        {
            if(v[i]!=i)
            {
                flag = false;
                break;
            }
        }
        if(flag)
        cout<<"YES"<<"\n";
        else
        {
            cout<<"NO\n";
        }
        
        
        
        
        
    }
    return 0;
    
}