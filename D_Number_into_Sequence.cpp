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
bool isPrime(ll n) 
{ 
    // Corner cases 
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
  
    // This is checked so that we can skip 
    // middle five numbers in below loop 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
  
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
  
    return true; 
} 

int main() {
	fast;
    int t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        
            map<ll,ll> map;
            VI v;
            ll k=n;
            int cnt=0,f;
            for(ll i=2;i*i<=k;i++)
            {
                
                    while(n%i==0)
                    {
                        n/=i;
                        v.pb(i);
                        map[i]++;
                    }
                
                //if(n==0)
                //break;
            }
            
            ll mx=0,temp;
            ll ans=1;
            for(auto& i:map)
            {
                if(i.second>mx)
                {
                    temp=i.first;
                    mx=i.second;
                }
            }
            cout<<mx<<"\n";
            For(i,v.size())
            {
                if(v[i]!=temp)
                ans*=v[i];
                
            }
            For(i,mx-1)
            cout<<temp<<" ";
            cout<<temp*ans<<"\n";
            
            

    
        
        
        
        
        
    }

	return 0;
}
  