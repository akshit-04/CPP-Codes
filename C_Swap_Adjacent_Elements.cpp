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
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        int a[n],b[n];
        For(i,n)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        cin>>s;
        sort(b,b+n);
        bool flag=true;
        for(int i=n-1;i>0;i--)
        {
            if(a[i]==b[i])
            continue;
            if(s[i-1]=='0')
            {
                flag=false;
                break;
            }
            else
            {
                swap(a[i],a[i-1]);
            }
            
        }
        if(flag)
        cout<<"YES";
        else
        {
            cout<<"NO";
        }
        
        
    }
    
    return 0;  
}