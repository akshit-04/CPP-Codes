#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;
    cin>>n;
    ll a[n],left=0,right=0,ans=0;
    for(int i=0;i<n;i++)
    cin>>a[i];
    //psum[0]=a[0];
    int i=0,k=n-1;
    bool flag=false;
    while(i<=k)
    {
        if(left>right)
            right+=a[k--];
        else
        {
            left+=a[i++];
        }
        if(left==right)
            ans=left;
        
    }
    cout<<ans;
    
}