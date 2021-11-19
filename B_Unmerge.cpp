#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int N = 1e5+1;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        VI a(2*n),b;
        For(i,2*n)
        cin>>a[i];
        int m=a[0],cnt=1;
        for(int i=1;i<2*n;i++)
        {
            if(a[i]>m)
            {
                b.pb(cnt);
                cnt=1;
                m=a[i];
            }
            else
            {
                cnt++;
            }
            
        }
        b.pb(cnt);
        vector<bool> ans(n+1,false);
        ans[0]=true;
        for(int i:b)
        {
            for(int j=n-i;j>=0;j--)
            {
                if(ans[j])
                ans[i+j]=true;
            }
        }
        if(ans[n])
        cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        

    }
}