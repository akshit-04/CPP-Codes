#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a,b;
        cin>>n>>m;
        if(n>m)
        {
            a=n-m;
            n=m;
            a+=n-1;
            b=m;
        }
        else if(m>n)
        {
            b=m-n;
            m=n;
            b+=m;
            a=n-1;
        }
        else
        {
            a=n-1;
            b=m;
        }
        cout<<a<<" "<<b<<"\n";
        
        
    }
    
    
    
    return 0;
    

    
    

    
    
}