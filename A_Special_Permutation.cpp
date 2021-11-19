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
        if(n%2==0)
        {
            for(int i=n;i>=1;i--)
            cout<<i<<" ";
            cout<<"\n";
        }
        else
        {
            cout<<(n/2)+1<<" ";
            for(int i=n;i>0;i--)
            {
                if(i!=(n/2)+1)
                cout<<i<<" ";
                
            }
            cout<<"\n";
        }
        
        
        
    }

	return 0;
}
  