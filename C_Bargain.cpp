#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];
int main()
{
    fast;
    string s;
    cin>>s;
    int n=s.size();
    //cout<<n<<"\n";
    vector<ll> pow10(n),suff(n);
    pow10[n-1]=1;
    ll p=10;
    for(int i=n-2;i>=0;i--)
    {
        pow10[i]=(p)%MOD;
        p=(p*10)%MOD;
        //cout<<pow10[i]<<" ";
    }
    //cout<<endl;
    suff[n-1]=0;
    ll k=1;
    for(int i=n-2;i>=0;i--)
    {
        suff[i]=((n-1-i)*k+suff[i+1])%MOD;
        k=(k*10)%MOD;
        //cout<<suff[i]<<" ";
    }
    ll ans=0;
    /*For(i,n)
    {
        cout<<pow10[i]<<" ";
    }
    cout<<endl;
    For(i,n)
    {
        cout<<suff[i]<<" ";
    }
    cout<<endl;
    */
    For(i,n)
    {
        ll d=s[i]-'0';
        ll pre=(((ll)i*((ll)i+1))/2)%MOD;
        ans=(ans+((suff[i]*d)%MOD))%MOD;
        ans=(ans+((((pre*pow10[i])%MOD)*d)%MOD))%MOD;
        
    }
    cout<<ans<<"\n";
   
    
    
    
  
    
    
}