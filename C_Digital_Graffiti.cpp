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
         int n,m;
         cin>>n>>m;
         char a[n][m];
         For(i,n)
         {
             For(j,m)
             cin>>a[i][j];
         }
         int cnt=0;
         for(int i=1;i<n-1;i--)
         {
             for(int j=1;j<m-1;j++)
             {
                 if(a[i][j]=='#')
                 {
                     if(a[i-1][j-1]=='#' && a[i+1][j+1]!='#')
                     cnt++;
                     else if(a[i-1][j]=='#' && a[i+1][j]!='#')
                     cnt++;
                     else if(a[i-1][j+1]=='#' && a[i+1][j-1]!='#')
                     cnt++;
                     else if(a[i][j-1]=='#' && a[i][j+1]!='#')
                     cnt++;
                     else if(a[i-1][j-1]!='#' && a[i+1][j+1]=='#')
                     cnt++;
                     else if(a[i-1][j]!='#' && a[i+1][j]=='#')
                     cnt++;
                     else if(a[i-1][j+1]!='#' && a[i+1][j-1]=='#')
                     cnt++;
                     else if(a[i][j-1]!='#' && a[i][j+1]=='#')
                     cnt++;

                 }
             }
             
         }
         cout<<cnt;

    }
    

        
        
    
    return 0;  
}