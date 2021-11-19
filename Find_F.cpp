#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];
//int a[101],r[10001],ans[10001];
int factorial(int n) 
{ 
    // single line to find factorial 
    return (n == 1 || n == 0) ? 1 : n * factorial(n - 1); 
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<factorial(n)<<"\n";
    }
    return 0;  
}
 