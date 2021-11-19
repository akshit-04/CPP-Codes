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
        int n, m;
	    cin>>n>>m;
	    vector<string> a(n+1);
	    for (int i=1; i<=n; i++)
        {
	    	cin>>a[i];
	    }
	    vector<pair<int,int>> v;
	    int c=0;
	    for (int i=1; i<=n; i++)
        {
	    	for (int j=1; j<=m; j++)
            {
	    		if (a[i][j-1]=='1')
                {
	    			c++;
	    			if (i==n && j==m)
                    {
	    				v.pb({i, j});
	    				v.pb({i-1, j});
	    				v.pb({i, j-1});
	    				
	    				v.pb({i-1, j-1});
	    				v.pb({i-1, j});
	    				v.pb({i, j});
	    				
	    				v.pb({i-1, j-1});
	    				v.pb({i, j-1});
	    				v.pb({i, j});
	    			}
	    			else if (i==n)
                    {
	    				v.pb({i, j});
	    				v.pb({i-1, j});
	    				v.pb({i, j+1});
	    				
	    				v.pb({i-1, j+1});
	    				v.pb({i-1, j});
	    				v.pb({i, j});
	    				
	    				v.pb({i-1, j+1});
	    				v.pb({i, j+1});
	    				v.pb({i, j});
	    			}
	    			else if (j==m)
                    {
	    				v.pb({i, j});
	    				v.pb({i+1, j});
	    				v.pb({i, j-1});
	    				
	    				v.pb({i+1, j-1});
	    				v.pb({i+1, j});
	    				v.pb({i, j});
	    				
	    				v.pb({i+1, j-1});
	    				v.pb({i, j-1});
	    				v.pb({i, j});
	    			}
	    			else
                    {
	    				v.pb({i, j});
	    				v.pb({i+1, j});
	    				v.pb({i, j+1});
	    				v.pb({i, j});
	    				v.pb({i+1, j});
	    				v.pb({i+1, j+1});
	    				v.pb({i, j});
	    				v.pb({i, j+1});
	    				v.pb({i+1, j+1});
	    			}
	    		}
	    	}
	    }
	    cout<<v.size()/3<<endl;
	    for (int i=0; i<v.size(); i+=3){
	    	cout<<v[i].first<<" "<<v[i].second<<" "<<v[i+1].first<<" "<<v[i+1].second<<" "<<v[i+2].first<<" "<<v[i+2].second;
			cout<<endl;	    
	    }
        

        
        
        
    }
	return 0;
}
  