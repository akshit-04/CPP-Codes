#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 998244353;
//#define M_PI 3.14159265358979323846

int main() {
	fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        map<int,VI> map;
        For(i,n)
        {
            cin>>a[i];
            map[a[i]].pb(i);
        }
        int cnt=0,mn=INT_MAX;
        for(auto& i:map)
        {
            cnt=0;
            
                for(int j=1;j<i.second.size();j++)
                {
                   if((i.second[j])-(i.second[j-1])>1)
                   cnt++; 
                }
                if(i.second[0]>0)
                cnt++;
                if(i.second[i.second.size()-1]<n-1)
                cnt++;
                mn=min(cnt,mn);
            
            
        }
        cout<<mn<<"\n";
        
        
        
        
    }

	return 0;
}
  