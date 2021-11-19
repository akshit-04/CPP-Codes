#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n];
        For(i,n)
        cin>>a[i];
        
            for(int i=0;i<(n/2);i+=2)
            {
                swap(a[i],a[n-i-1]);
            }
            
        For(i,n)
        cout<<a[i]<<" ";
        
    }
    
}