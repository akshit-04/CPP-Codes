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
        int a[n];
        For(i,n)
        cin>>a[i];
        int cnt=0,c=0;
        bool f=false,falg=false;
        for(int j=1;j<n-1;j++)
        {
            if((a[j]>a[j-1]&&a[j]>a[j+1]) || (a[j]<a[j-1]&&a[j]<a[j+1]))
            {
                cnt++;
                if(f)
                flag=true;
            }
            else
            {
               f=false;
            }
            
        }
        if(cnt==0 || cnt=1)
        cout<<0<<"\n";
        else
        {
            if(flag)
            cout<<cnt-<<"\n";
            else
            {
                cout<<cnt-1<<"\n";
            }
            
            
        }
    }
    
    return 0;  
}