#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int MOD = 1000000007;
char arr[1111][1111];
int a[101],r[10001],ans[10001];
int main()
{
    fast;
    int t;
    cin>>t;
    aa:while(t--)
    {
        int n,ans;
        ll k,cnt=0;
        bool flag=true,ok=false;
        cin>>n>>k;
        int a[n];
        For(i,n)
        {
            cin>>a[i];
            if(i>0)
            {
                if(a[i]>a[i-1])
                ok=true;
            }
        }
        if(!ok)
        {
            cout<<-1<<"\n";
            goto aa;
        }
        for(int i=1;i<n;i++)
        {
            if(a[i]<=a[i-1])
            continue;
            else
            {
                k--;
                a[i-1]++;
                if(k==0)
                {
                    ans=i;
                    flag=false;
                    break;
                }
                if(i-1>0)
                i-=2;
                else
                {
                    i--;
                }
                


            }
            
        }
        if(flag)
        cout<<-1<<"\n";
        else
        {
            cout<<ans<<"\n";
        }
        
        
    }
    
    return 0;  
}