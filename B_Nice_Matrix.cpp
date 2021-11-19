#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int N = 1000010;
char arr[1111][1111];
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        ll a[n][m],ans=0;
        For(i,n)
            For(j,m)
                cin>>a[i][j];
        For(i,n)
        {
            For(j,m)
            {
                ll val=a[i][j];
                ll answ=1e9;
                answ=abs(val-a[i][j])+abs(val-a[i][m-j-1])+abs(val-a[n-i-1][j])+abs(val-a[n-i-1][m-j-1]);
                val=a[i][m-j-1];
				answ=min(answ,abs(val-a[i][j])+abs(val-a[i][m-j-1])+abs(val-a[n-i-1][j])+abs(val-a[n-i-1][m-j-1]));
				val=a[n-1-i][m-j-1];
				answ=min(answ,abs(val-a[i][j])+abs(val-a[i][m-j-1])+abs(val-a[n-i-1][j])+abs(val-a[n-i-1][m-j-1]));
				val=a[n-1-i][j];
				answ=min(answ,abs(val-a[i][j])+abs(val-a[i][m-j-1])+abs(val-a[n-i-1][j])+abs(val-a[n-i-1][m-j-1]));
				ans+=answ;

            }
        }
        
        cout<<ans/4<<"\n";
    }
    
    
    
    
  
    
    
}