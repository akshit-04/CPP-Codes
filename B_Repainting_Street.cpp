#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define pb push_back
#define mp make_pair
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];

int main()
{
    fast;
    int t;
    cin>>t;
    aa:while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        For(i,n)
        cin>>a[i];
        int mn=INT_MAX;
        for(int i=1;i<=100;i++)
        {
            VI index;
            For(j,n)
            {
                if(a[j]!=i)
                index.pb(j);
            }
            if(index.size())
            {
                int idx=0,cnt=0;
                while(idx<index.size())
                {
                    cnt++;
                    idx=lower_bound(index.begin(),index.end(),index[idx]+k)-index.begin();
                }
                mn=min(cnt,mn);
            }
            else
            {
                cout<<0<<"\n";
                goto aa;
            }
            
        }
        cout<<mn<<"\n";
        
        
    }
    
    
    
    return 0;
    

    
    

    
    
}