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
    int n,m,k;
    cin>>n>>m>>k;
    int ans=0;
    For(i,n)
    {
        int cnt=0;
        For(j,k)
        {
            int a;
            cin>>a;
            cnt+=a;
        }
        int b;
        cin>>b;
        if(cnt>=m && b<=10)
        ans++;
    }
    cout<<ans<<"\n";

	return 0;
}
  