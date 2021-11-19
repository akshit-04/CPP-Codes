#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int N = 1e5+10;
char arr[1111][1111];
int a[101],r[10001],ans[10001];
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[N],b[N];
        ll sum=0;
        For(i,n)
        {
            cin>>a[i];
            b[i]=a[i];
            sum+=a[i];
        }
        for(int i=0;;i=(i+1)%n)
        {
            if(b[i]%x==0)
            {
                b[i]/=x;
                sum+=a[i];
            }
            else
            {
                break;
            }
            
        }
        cout<<sum<<"\n";
    }
    
    return 0;  
}