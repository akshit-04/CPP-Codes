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
        int n,m;
        cin>>n>>m;
        VI a(n);
        For(i,n)
        cin>>a[i];
        int p[m];
        For(i,m)
        cin>>p[i];
        sort(a.rbegin(),a.rend());
        int j=0;
        ll sum=0;
        For(i,n)
        {
            if(j<a[i] && j<m)
            {
                if(p[j]<p[a[i]-1])
                {
                    sum+=p[j];
                    j++;
                }
                else
                sum+=p[a[i]-1];
            }
            else
            {
                sum+=p[a[i]-1];
            }
            
        }
        cout<<sum<<"\n";
    }
    
    return 0;  
}