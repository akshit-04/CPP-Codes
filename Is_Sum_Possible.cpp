#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        For(i,n)
        cin>>a[i];
        int q;
        cin>>q;
        while(q--)
        {
            int x,cnt=0;
            cin>>x;
            if(x<0)
            {
                cout<<0<<"\n";
                continue;
            }
            For(i,n)
            {
                int sum=0;
                for(int j=i;j<n;j++)
                {
                    sum+=a[j];
                    if(sum==x)
                    cnt++;
                    if(sum>x)
                    break;
                }
            }
            cout<<cnt<<"\n";
        }
    }
    
    
    
    return 0;
    

    
    

    
    
}