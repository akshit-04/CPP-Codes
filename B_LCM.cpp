#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int N = 1000010;
char arr[1111][1111];
int main()
{
    fast;
    ll n;
    cin>>n;
    ll cnt=0;
    for(int i=1;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            if(n/i==i)
            cnt++;
            else
            {
                cnt+=2;
            }
            
        }
    }
    cout<<cnt; 
    return 0;
    
}