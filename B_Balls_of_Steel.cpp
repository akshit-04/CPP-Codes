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
        int n,k;
        cin>>n>>k;
        int x[n],y[n];
        For(i,n)
        cin>>x[i]>>y[i];
        int cnt=0;
        bool f=false;
        For(i,n)
        {
            cnt=0;
            For(j,n)
            {
                if(abs(x[i]-x[j])+abs(y[i]-y[j])<=k)
                cnt++;
            }
            if(cnt==n)
            {
                f=true;
                break;
            }
        }
        if(f)
        cout<<1<<"\n";
        else
        {
            cout<<-1<<"\n";
        }
        
        

        
        
        

    }
    
    
    
    return 0;
    

    
    

    
    
}