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
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        For(i,n)
        {
            cin>>a[i];
            sum+=a[i];
        }
        if(sum==n*5)
        cout<<0;
        else
        {
            if(sum>=(n*5)-(n/2))
            cout<<0;
            else
            {
                sort(a,a+n);
                int k=((n*5)-(n/2))-sum,cnt=0;
                For(i,n)
                {
                    cnt++;
                    k-=5-a[i];
                    if(k<=0)
                    break;
                }
                cout<<cnt;
            }
            
        }
        
        

    }
    
}