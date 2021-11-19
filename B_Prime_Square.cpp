#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=1;i<=n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
VI v;
bool isPrime(int n) 
{ 
    // Corner case 
    if (n <= 1) 
        return false; 
  
    // Check from 2 to n-1 
    for (int i = 2; i < n; i++) 
        if (n % i == 0) 
            return false; 
  
    return true; 
} 
// Function to print primes 
 
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
      int n;
		cin>>n;
		int k=0;
		for(int i=n;;i++){
			if(isPrime(i) && !isPrime(i-n+1)){
				k=i;
				break;
			}
		}
		For(i,n){
			For(j,n){
				if(i==j)
					cout<<k-n+1<<" ";
				else
					cout<<1<<" ";
			}
			cout<<"\n";
		}
       
        
        
    }
    return 0;
    
}