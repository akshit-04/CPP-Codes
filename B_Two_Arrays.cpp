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
        int n,T;
        cin>>n>>T;
        int a[n];
        For(i,n)
        cin>>a[i];
        map<int,int> m,v;
        vector<bool> ans;
        For(i,n)
        {
           if(m[T-a[i]]<=v[T-a[i]])
           {
               m[a[i]]++;
               ans.push_back(0);
           }
           else
           {
               v[a[i]]++;
               ans.push_back(1);
           }
           
            
            
        }
        For(i,n)
        cout<<ans[i]<<" ";
        cout<<"\n";
    }

    return 0;
    
}