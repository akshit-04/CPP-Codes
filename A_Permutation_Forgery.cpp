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
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=n-1;i>=0;i--)
        cout<<a[i]<<" ";
        cout<<endl;
        
    }
}