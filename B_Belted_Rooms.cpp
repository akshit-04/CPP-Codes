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
		string s;
		cin>>n>>s;
		int l=0,r=0;
		For(i,n){
			if(s[i]=='>')
				r++;
			if(s[i]=='<')
				l++;
		}	
		if(l==0 || r==0){
			cout<<n<<"\n";
			continue;
		}
		int ans=0;
		For(i,n){
			if(s[i]=='-' || s[(i+1)%n]=='-')
				ans++;
		}
		cout<<ans<<"\n";
    }

    return 0;
    
}