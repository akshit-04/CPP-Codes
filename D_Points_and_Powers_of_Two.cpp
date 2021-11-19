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
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[M];
        For(i,n)
        cin>>a[i];
        sort(a,a+n);
        int ans=1,a1=a[0],a2;
        For(i,n)
        {
            For(j,31)
            {
                int v=1<<j;
                if(binary_search(a+i+1, a+n, a[i]+v))
                {
                    ans=2;
                    a1=a[i];
                    a2=a[i]+v;
                    if(binary_search(a+i+1, a+n, a[i]+2*v))
                    {
                        cout<<3<<"\n";
                        cout<<a[i]<<" "<<a[i]+v<<" "<<a[i]+2*v;
                        return 0;
                    }
                }
            }
        }
        if(ans==2)
        {
            cout<<2<<"\n";
            cout<<a1<<" "<<a2;
        }
        else
        {
            cout<<1<<" "<<a1;
        }
        
        
    }
    
    return 0;  
}