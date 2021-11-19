#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int n = 1e6;
bool prime[n+1]; 
void Sieve() 
{ 
    
        memset(prime, true, sizeof(prime)); 
  
        for (int p=2; p*p<=n; p++) 
        { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (int i=p*p; i<=n; i += p) 
                prime[i] = false; 
        } 
        }  
     
} 
int main()
{
    int t;
    cin>>t;
    Sieve();
    while(t--)
    {
        int d;
        cin>>d;
        
  
    // Print all prime numbers 
    int temp=1;
    ll ans=1,cnt=0;
    for (int p=2; p<=n; p++)
    { 
       if (prime[p] && p-temp>=d) 
          {
              ans*=p;
              cnt++;
              temp=p;
              if(cnt==2)
              break;
          }
    }
    cout<<ans<<"\n";
}
}