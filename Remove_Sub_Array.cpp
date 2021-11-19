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
    aa:while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        For(i,n)
        cin>>a[i];
        int start=0,end=n-1;
        while(start<n-1 && a[start]<=a[start+1])
            start++;
        if(start==n-1)
        {
            cout<<0;
            goto aa;
        }
        while(end>=start && a[end]>=a[end-1]) 
            end--;
        if(end==0)
        {
            cout<<n-1;
            goto aa;
        }
        int ans=min(n-1-start,end);
        int k=0,j=end;
        while(k<=start && j<n)
        {
            if(a[k]<=a[j])
            {
                ans = min(ans, j-k-1);
                k++;
            
            } 
            else 
                j++;
        }
        cout<<ans;
        

        

    }
    
    
    
    return 0;
    

    
    

    
    
}