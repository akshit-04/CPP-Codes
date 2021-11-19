#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1e9+7;
char arr[1111][1111];
//int a[101],r[10001],ans[10001];
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        bool flag=false;
        For(i,n)
        {
            cin>>a[i];
            if(i>0)
            {
                if(a[i-1]<a[i])
                flag=true;
            }
        }
        if(flag)
        cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        

        
    }
    return 0;  
}
 