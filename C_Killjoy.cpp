#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        ll ans=0;
        cin>>n>>x;
        vector<int> a(n);
        For(i,n)
        cin>>a[i];
        set<int> s;
        bool flag=false;
        For(i,n)
        {
            ans+=x-a[i];
            s.insert(a[i]);
            if(a[i]==x)
            flag=true;
        }
        if(s.size()==1 && *s.begin()==x)
        cout<<0<<endl;
        else if(flag || a.size()==1 || ans==0)
        cout<<1<<endl;
        else
        {
            cout<<2<<endl;
        }
        
        
        
        
    }
    
}