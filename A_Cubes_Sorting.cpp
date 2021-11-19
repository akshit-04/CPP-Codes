#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        bool flag=true;
        For(i,n)
        {
            cin>>a[i];
            if(i>=1&&a[i]>=a[i-1])
            flag=false;
        }
        if(flag)
        {
            cout<<"NO"<<"\n";
            
        }
        else
        {
            
           cout<<"YES"<<endl; 
        }
        


        
        
    }
    
}