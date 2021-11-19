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
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        bool used[n];
        For(i,n)
        {
            cin>>a[i];
            used[i]=false;
        }
        For(i,n-1)
        {
            int j=0;
            while(j<n && a[j]!=i+1)
            j++;
            while(j>0 && !used[j-1] && a[j]<a[j-1])
            {
                swap(a[j],a[j-1]);
                used[j-1]=true;
                j--;
            }
        }
        For(i,n)
        cout<<a[i]<<" ";
        cout<<"\n";
    }
    
    return 0;  
}