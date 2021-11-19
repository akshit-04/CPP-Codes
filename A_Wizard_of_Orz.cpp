#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int N = 1e6+1;
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
        if(n==1)
        cout<<9<<"\n";
        else
        {
            cout<<"98";
            int v=9;
            for(int i=3;i<=n;i++)
            {
                cout<<v%10;
                v++;
            }
            cout<<"\n";
        }
        
        
    }
    
    return 0;  
}