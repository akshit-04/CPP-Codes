#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int N = 1e5+10;
char arr[1111][1111];
//int a[101],r[10001],ans[10001];
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n,x,ind=-1;
        cin>>n>>x;
        VI a(n);
        For(i,n)
        {
            cin>>a[i];
            if(a[i]==x)
            ind=i;
        }
        sort(a.begin(),a.end());
        int cnt=0;
	    while(a[(a.size()-1)/2]!=x)
        {
		    a.pb(x);
		    sort(a.begin(),a.end());
		    cnt++;
	    }
        cout<<cnt;
        
    }
    
    return 0;  
}