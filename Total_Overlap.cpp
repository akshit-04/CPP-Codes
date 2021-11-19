#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];
//int a[101],r[10001],ans[10001];
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        vector<pair<int,int>> a(n),b(m);
        For(i,n)
        {
            int l,r;
            cin>>l>>r;
            a.push_back({l,r});
        }
        For(i,m)
        {
            int l,r;
            cin>>l>>r;
            b.push_back({l,r});
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        ll cnt=0;
        int i=0,j=0;
        while (i < n && j < m) { 
        // Left bound for intersecting segment 
        int l = max(a[i].first, b[j].first); 
  
        // Right bound for intersecting segment 
        int r = min(a[i].second, b[j].second); 
  
        // If segment is valid print it 
        if (l <= r) 
            cnt+=(r-l); 
  
        // If i-th interval's right 
        // bound is smaller 
        // increment i else 
        // increment int 
        if(a[i].first>b[j].first)
        i++;
        else
        {
            j++;
        }
        
         
    } 
        cout<<cnt<<"\n";
        
    }
    return 0;  
}