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
        ll n;
        cin>>n;
        if(n==1)
        cout<<0<<"\n";
        else if(n==2)
        cout<<1<<"\n";
        else if(n==3)
        cout<<2<<"\n";
        else if(n%2)
        cout<<3<<"\n";
        else
        {
            cout<<2<<"\n";
        }
        
    }

	return 0;
}
  