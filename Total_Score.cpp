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
        int n,k;
        cin>>n>>k;
        int a[k];
        For(i,k)
        cin>>a[i];
        For(i,n)
        {
            string s;
            int cnt=0;
            cin>>s;
            For(j,k)
            {
                if(s[j]=='1')
                cnt+=a[j];
            }
            cout<<cnt<<"\n";
        }
    }
    return 0;  
}