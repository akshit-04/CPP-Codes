#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int N = 1000010;
int cnt[N],arr[N];
vector<ll> v(26);
int main()
{
    fast;
    
       ll n,k;
       cin>>n>>k;
       string s;
       cin>>s;
       

       For(i,n)
       {
           int a=s[i]-'A';
           v[a]++;
       }
       ll ans=0;
       sort(v.begin(),v.end(),greater<int>());
       For(i,26)
       {
           if(v[i]>k)
           {
               ans+=(k*k);
               break;
           }
           else
           {
               ans+=(v[i]*v[i]);
               k-=v[i];
           }
           
       }
        cout<<ans;
       
    

    return 0;
    
}