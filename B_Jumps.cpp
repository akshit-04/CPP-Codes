#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];

int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int cnt=0;
		while(cnt*(cnt+1)<(2*n))
			cnt++;
		if(cnt*(cnt+1)/2 ==(n+1))
			cnt++;
		cout<<cnt<<endl;
        
    }
    
    
    
    return 0;
    

    
    

    
    
}