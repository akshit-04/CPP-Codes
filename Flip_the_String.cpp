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
        string a,b;
        cin>>a>>b;
        
            int cnt=0;
            int temp=0,ans=0;
            for(int i=0;i<a.size();i+=2)
            {
                if(a[i]==b[i])
                continue;
                while(i<a.size() && a[i]!=b[i])
                i+=2;
                ans++;
                
            }
            cnt=0,temp=0;
            for(int i=1;i<a.size();i+=2)
            {
                if(a[i]==b[i])
                continue;
                while(i<a.size() && a[i]!=b[i])
                i+=2;
                ans++;
            }
            cout<<ans<<"\n";
        
        
    }

	return 0;
}
  