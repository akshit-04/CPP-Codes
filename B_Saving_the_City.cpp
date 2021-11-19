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
        string s;
		int a,b;
		cin>>a>>b>>s;
		int l=s.size(),r=0;
		For(i,s.size())
        {
			if(s[i]=='1')
            {
			    l=i;
			    break;
			}
		}	
		for(int i=s.size()-1;i>=0;i--)
        {
			if(s[i]=='1')
            {
			    r=i+1;
			    break;
			}
		}
		if(l>r)
        {
			cout<<0<<"\n";
			continue;
		}
		int cnt=0;
		VI m;
		for(int i=l;i<r;i++)
        {
			if(s[i]=='1')
            {
				if(cnt)
					m.pb(cnt);
				cnt=0;
				continue;
			}
			cnt++;
		}
		int ans=(m.size()+1)*a;
		sort(m.begin(),m.end());
		for(int i:m)
        {
			if(ans-a+b*i<ans)
            {
				ans=ans-a+b*i;
			}
		}
		cout<<ans<<"\n";
        
        
        
        
    }
    return 0;
    
}