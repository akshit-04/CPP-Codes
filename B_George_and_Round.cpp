#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];
int main()
{
    fast;
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    For(i,n)
    cin>>a[i];
    map<int,int> map;
    For(i,m)
    cin>>b[i];
    sort(b,b+m);
    int cnt=0;
    int j=m-1;
    for(int i=n-1;i>=0;i--)
    {
        if(j==-1 || a[i]>b[j])
        cnt++;
        else
        {
            j--;
        }
        
    }
    cout<<cnt;
    

    
    
}