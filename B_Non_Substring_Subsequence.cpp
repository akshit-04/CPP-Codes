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
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        aa:while(q--)
        {
            int l,r;
            cin>>l>>r;
            l-=1;
            r-=1;
            For(i,l)
            {
                if(s[i]==s[l])
                {
                    cout<<"YES\n";
                    goto aa;
                }
            }
            for(int i=r+1;i<n;i++)
            {
                if(s[i]==s[r])
                {
                    cout<<"YES\n";
                    goto aa;
                }
            }
            cout<<"NO\n";
            
        }
        
    }

	return 0;
}
  