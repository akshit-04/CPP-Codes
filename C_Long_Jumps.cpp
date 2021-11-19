#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int M = 200001;
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
        ll b[n];
        For(i,n)
        {
            cin>>a[i];
        }
        map<int,VI> map;
        ll m=0;
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]+i<n)
            b[i]=b[a[i]+i]+a[i];
            else
            {
                b[i]=a[i];
            }
            m=max(m,b[i]);
        }
        cout<<m<<"\n";
        
        
    }
    
    return 0;  
}