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
    int n,r;
	cin>>n,r;
	double cir=2*3.14*r;
    //cir/=n;
    cir/=2.0;
    cout<<setprecision(6)<<cir;
	return 0;
}
  