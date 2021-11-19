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
        string s;
        cin>>s;
        int ap=0,b=0,as=0;
	    For(i,s.size())
        {
		    if(s[i]=='a')
            {
			    as=max({ap,b,as})+1;
			    ap++;
		    }
		else
			b=max(ap,b)+1;
	}
	cout<<max({ap,b,as});
    }
    
    return 0;  
}