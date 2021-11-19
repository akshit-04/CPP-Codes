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
        ll x,ans=1,cnt=0;
        cin>>x;
        while(x)
        {
            if(ans>=2000000000)
            break;
            ll c=(ans*(ans+1))/2;
            if(x<c)
            break;
            cnt++;
            x-=c;
            ans=ans*2+1;
        }
        cout<<cnt<<"\n";
        
        
    }
    
}