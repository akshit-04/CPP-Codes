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
        int n;
        cin>>n;
        if(n==1)
        cout<<0<<"\n";
        else
        {
            int mn=INT_MAX;
            for(int i=1;i<=1e5;i++)
            {
                if(i-1<=n)
                mn=min(mn,i+((n-1)/i));
            }
            cout<<mn-1<<"\n";
           
        }
        

        
        
    }

    return 0;
    
}