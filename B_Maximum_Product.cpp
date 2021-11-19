#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int t;
    cin>>t;
    while(t--)
    {
       int n;
       cin>>n;
       int a[n];
       For(i,n)
       cin>>a[i];
       sort(a,a+n);
       if(a[n-1]<0)
       {
           int i=n-1,cnt=0;
           ll p=1;
           while(cnt<5)
           {
               p*=a[i];
               cnt++;
               i--;
           }
           cout<<p<<endl;
       }
       else if(a[n-2]<0)
       {
           ll p=1;
           For(i,4)
           p*=a[i];
           p*=a[n-1];
           cout<<p<<endl;

       }
       else
       {
           ll ans=-2e18,res=1;  
	       for(int i = n -1 ; i >= n-5 ; i--) 
           {
		        res *= a[i] ; 
	       }
	       ans = max(ans , res) ; 
	       res = 1 ; 
	       for(int i = n - 1 ; i >= n - 3 ; --i) 
		        res *= a[i] ;
	       res *= a[0]*a[1] ; 
	       ans = max(ans ,res) ; 
           res = a[n-1] ;
	       For(i,4) 
		    res *= a[i] ; 
	       ans = max(ans ,res) ; 
	       cout << ans << "\n" ; 
 
       }
       
        
    }
    
}