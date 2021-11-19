#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int n = 1e6;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],m=INT_MIN,cnt=1;
        For(i,n)
        {
            cin>>a[i];
            if(i>0)
            {
                if(a[i]==a[i-1])
                cnt++;
                else
                {
                    
                    m=max(cnt,m);
                    cnt=1;
                }
                
            }
        }
        m=max(cnt,m);
        if(n==1)
        cout<<1<<"\n";
        else
        {
            cout<<m<<"\n";
        }
        
        
        
        
    }
}