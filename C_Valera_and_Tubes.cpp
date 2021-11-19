#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
    fast;
    int n,m,k;
    cin>>n>>m>>k;
    int cnt=0,temp=0;
    vector<pair<int,int>> v[k];
    For(i,n)
    {
        if(i%2)
        {
            for(int j=m-1;j>=0;j--)
            {
                v[temp].pb(mp(i+1,j+1));
                cnt++;
                if(cnt==2)
                {
                    if(temp!=k-1)
                    temp++;
                    cnt=0;
                }
            }
        }
        else
        {
            For(j,m)
            {
                v[temp].pb(mp(i+1,j+1));
                cnt++;
                if(cnt==2)
                {
                    if(temp!=k-1)
                    temp++;
                    cnt=0;
                }
            }
        }
        
    }
    for(auto& i:v)
    {
		cout<<i.size()<<" ";
		for(auto& j:i)
        {
			cout<<j.first<<" "<<j.second<<" ";
		}
		cout<<"\n";
	}

    return 0;
    
}