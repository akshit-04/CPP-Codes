#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int MOD = 1000000007;
char arr[1111][1111];
int a[101],r[10001],ans[10001];
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        ll a=abs(x)+abs(y);
        if(x>0 && y>0)
        cout<<0<<" "<<a<<" "<<a<<" "<<0;
        else if(x<0 && y>0)
        cout<<-1*a<<" "<<0<<" "<<0<<" "<<a;
        else if(x<0 && y<0)
        cout<<-1*a<<" "<<0<<" "<<0<<" "<<-1*a;
        else
        {
            cout<<0<<" "<<-1*a<<" "<<a<<" "<<0;
        }
        
    }
    
    return 0;  
}