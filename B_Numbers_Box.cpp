#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,cnt=0,sum=0;
        cin>>n>>m;
        int a[n][m],mn=INT_MAX;
        For(i,n)
        {
            For(j,m)
            {
                cin>>a[i][j];
                if(a[i][j]<=0)
                cnt++;
                sum+=abs(a[i][j]);
                mn=min(mn,abs(a[i][j]));
            }
                
        }
        if(cnt%2)
        sum-=2*mn;
        cout<<sum<<"\n";
            
    
        
        
    }
	return 0;
}
  