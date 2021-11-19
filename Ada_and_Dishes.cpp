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
        For(i,n)
        cin>>a[i];
        if(n==1)
        cout<<a[0]<<endl;
        else if(n==2)
        cout<<max(a[0],a[1])<<endl;
        else if(n==3)
        {
            sort(a,a+n);
            cout<<max(a[0]+a[1],a[2])<<endl;
        }
        else   
        {
            int l,r;
            sort(a,a+n);
            l=max(a[0]+a[3],a[2]+a[1]);
            r=max(a[0]+a[1]+a[2],a[3]);
            cout<<min(l,r)<<endl;
  }
        
    }

	return 0;
}
  