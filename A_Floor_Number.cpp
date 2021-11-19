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
        int n,x;
        cin>>n>>x;
        if(n<=2)
        cout<<1<<"\n";
        else
        {
            cout<<(n-2+x-1)/x+1<<"\n";
        }
        
    }

    return 0;
    
}