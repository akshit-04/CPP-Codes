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
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        For(i,n)
        cin>>a[i];
        int cnt=0;
        For(i,n-1)
        {
            int k=min(a[i],a[i+1]);
            while(2*k<max(a[i],a[i+1]))
            {
                cnt++;
                k*=2;
            }
        }
        cout<<cnt<<"\n";
    }
    return 0;  
}