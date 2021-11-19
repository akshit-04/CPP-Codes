#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int n;
    cin>>n;
    vector<int> a(n);
    For(i,n)
    cin>>a[i];
    sort(a.begin(),a.end());
    cout<<(n-1)/2<<endl;
    for(int i=0;i<n/2;i++)
    {
        cout<<a[n-1-i]<<" "<<a[i]<<" ";
    }
    if(n%2)
    {
        cout<<a[n/2];
    }
    
    
    
}