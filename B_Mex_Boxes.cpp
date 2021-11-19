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
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        map<int,int> map;
        For(i,n)
        {
            cin>>a[i];
            map[a[i]]++;
        }
        //sort(a,a+n);
        
        int j=0,m=k;
        ll ans=0;
        bool flag=false;
        for(auto& i:map)
        {
            if(i.first==j)
            {
                if(i.second<m)
                {
                    ans+=((m-i.second)*j);
                    m-=(m-i.second);

                }

                j++;
            }
            else
            {
                ans+=(m*j);
                flag=true;
                break;
            }
        }
        if(!flag)
        ans+=(m*j);
        cout<<ans;
        
    }
    
}