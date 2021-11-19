#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];
int a[101],r[10001],ans[10001];
int factorial(int a) 
{ 
    if (a == 0) 
        return 1; 
    return a * factorial(a - 1); 
} 
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n==12)
        cout<<1;
        else if(n==13)
        cout<<12;
        else
        {
            int k=n%12;
            int i=factorial(12);
            int j=factorial(12-k);
            int l=factorial(k);
            int ans=j*l;
            cout<<i/j;
        }
        
        
        
    }
    return 0;  
}