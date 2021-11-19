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
        int n,k;
        cin>>n>>k;
        int a[n],mn=INT_MAX,index,ans=0;
        For(i,n)
        {
            cin>>a[i];
            if(a[i]<mn)
            {
                mn=a[i];
                index=i;
            }
        }
        For(i,n)
        {
            int diff=k-a[i];
            if(i!=index)
            ans+=(diff/mn);
        }
        cout<<ans<<"\n";
    }

    return 0;
    
}