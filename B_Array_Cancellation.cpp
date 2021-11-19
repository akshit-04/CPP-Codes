#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
	ios_base::sync_with_stdio(0); cin.tie(0); 
	int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        ll a[n],ans=0;
        for(int i=0;i<n;i++)
        cin>>a[i];
        ll sum=0;
        for(int i=n-1;i>=0;i--)
        {
           sum+=a[i];
           if(sum>=0)
           sum=0;
            
        }
        cout<<abs(sum)<<endl;
    }
}