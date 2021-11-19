#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
ll ownFunc(vector<ll> &a)
{
    ll temp=0;
    ll mx=0;
    for(int i:a)
    {
        temp+=i;
        if(temp>mx)
        mx=temp;
        if(temp<0LL)
        temp=0;
    }
    return mx;
}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int n;
    cin>>n;
    vector<ll> a(n),d1,d2;
    For(i,n)
    cin>>a[i];
    For(i,n-1)
    {
        ll temp;
        temp=abs(a[i]-a[i+1]);
        if(i%2)
        temp*=-1;
        d1.push_back(temp);
    }
    for(auto i:d1)
    d2.push_back(-i);
    cout<<max(ownFunc(d1),ownFunc(d2));
    
    return 0;
    
}