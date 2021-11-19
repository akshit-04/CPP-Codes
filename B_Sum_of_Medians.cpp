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
        int n,k;
        cin>>n>>k;
        int v[n*k];
        For(i,n*k)
        cin>>v[i];
        ll sum=0;
        if(n%2)
        {
            int temp=(n-1)/2,cnt=0;
            for(int i=(n*k)-1-temp;i>=0;i-=temp+1)
            {
                sum+=v[i];
                cnt++;
                if(cnt==k)
                break;
            }
            cout<<sum<<"\n";
        }
        else
        {
            int temp=n/2,cnt=0;
            for(int i=(n*k)-1-temp;i>=0;i-=temp+1)
            {
                sum+=v[i];
                cnt++;
                if(cnt==k)
                break;
            }
            cout<<sum<<"\n";
        }
        

        
        
        
    }
	return 0;
}
  