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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        VI a(n);
        For(i,n)
        cin>>a[i];
        sort(a.rbegin(), a.rend());
        ll ans=0;
        For(i,n)
        {
            if(i%2==0)
            {
                if(a[i]%2==0)
                ans+=a[i];
            }
            else
            {
                if(a[i]%2)
                ans-=a[i];
            }
            
        }
        if(ans>0)
        cout<<"Alice\n";
        else if(ans==0)
        cout<<"Tie\n";
        else
        {
            cout<<"Bob\n";
        }
        
        
        
    }
    
    return 0;  
}