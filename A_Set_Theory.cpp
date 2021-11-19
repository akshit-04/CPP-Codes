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
        VI v(n);
        For(i,n)
        cin>>v[i];
        vector<bool> b(2*N,false);
        VI a;
        int cnt=0;
        for(int i=1;i<N;i++)
        {
            int k=1;
            For(j,n)
            {
                if(b[v[j]+i])
                {
                    k=0;
                    break;
                }
            }
            if(k)
            {
                For(j,n)
                b[v[j]+i]=true;
                cnt++;
                a.pb(i);
            }
            if(cnt==n)
            break;
            
        }
        cout<<"YES\n";
        for(int x:a)
        cout<<x<<" ";
        cout<<"\n";
    }
    
    return 0;  
}