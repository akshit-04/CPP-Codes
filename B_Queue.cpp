#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int N = 1000010;
int cnt[N],arr[N];
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       For(i,n)
       {
           int a,b;
           cin>>a>>b;
           arr[a]=b;
           cnt[a]++;
           cnt[b]--;

       }
       int u=0;
       while (cnt[u] != 1) 
       u++;
       int v=arr[0];
       while (u && v) 
       {
            cout<<u<<" "<<v<<" ";
            u=arr[u];
            v=arr[v];
       }
        if(u)
        cout<<u;  
    }

    return 0;
    
}