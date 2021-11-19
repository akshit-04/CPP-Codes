#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        VI a(n),b(n);
        For(i,n)
        cin>>a[i];
        sort(a.begin(),a.end());
        int sum=0;
        bool flag=false;
        For(i,n)
        {
            sum+=a[i];
            if(sum==0)
            {
                flag=true;
                break;
            }
        }
        if(flag)
        {
            reverse(a.begin(),a.end());
            sum=0;
            bool temp=false;
            For(i,n)
            {
                sum+=a[i];
                if(sum==0)
                {
                    temp=true;
                    break;
                }
            }
            if(temp)
            cout<<"NO\n";
            else
            {
                cout<<"YES\n";
                For(i,n)
                cout<<a[i]<<" ";
                cout<<"\n";
            }
            
        }
        else
        {
            cout<<"YES\n";
            For(i,n)
            cout<<a[i]<<" ";
            cout<<"\n";
        }
        

    }
    
    
    
    return 0;
    

    
    

    
    
}