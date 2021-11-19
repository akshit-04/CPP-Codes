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
    int n,k;
    cin>>n>>k;
    int a[n];
    For(i,n)
    cin>>a[i];
    int m=0;
    if(k>=n)
    {
        cout<<a[n-1];
    }
    else
    {
        int l=0,j=(n-k)*2-1;
        int s=a[n-1];
        while(l<j){
            s=max(s,a[l]+a[j]);
             
            
            l++;j--;
        }
        cout<<s;
    }
    
}