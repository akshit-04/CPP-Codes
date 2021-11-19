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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        VI v(n);
        //int mn=INT_MAX;
        bool flag=true;
        vector<pair<int,int>> ans;
        map<int,VI> map;
        For(i,n)
        {
            cin>>v[i];
            map[v[i]].pb(i+1);
            //mn=min(v[i],mn);
            if(i!=0)
            {
                if(v[i]!=v[i-1])
                flag=false;
            }
        }
        if(flag)
        {
            cout<<"NO\n";
            continue;
        }
        int cnt=0;
        cout << "YES\n" ; 
	    int node = -1 ,mn=1 ; 
	    for(auto &x : map) 
        {
		    if(x.first == v[0])
			continue ; 
		    for(int el : x.second) 
            {
			    cout << mn << " " << el << "\n" ; 
			    node = el ; 
		    }
	    }
	    if(node != -1) 
        {
		    for(int j = 1 ; j < map[v[0]].size() ; j++) 
            {
			    cout << node << " " << map[v[0]][j] << "\n" ; 
		    }
	    }



        
        
        

        
    }

    return 0;
    
}