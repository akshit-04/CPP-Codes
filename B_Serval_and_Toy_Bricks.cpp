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
    int n,m,h;
    cin>>n>>m>>h;
    int a[m],b[n];
    For(i,m)
    cin>>a[i];
    For(i,n)
    cin>>b[i];
    For(i,n)
    {
        For(j,m)
        {
            int k;
            cin>>k;
            if(k)
            cout<<min(b[i],a[j])<<" ";
            else
            {
                cout<<0<<" ";
            }
            
        }
        cout<<"\n";
    }

}