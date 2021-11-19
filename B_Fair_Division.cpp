#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int M = 200001;
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
        int a[n],one=0,two=0;
        For(i,n)
        {
            cin>>a[i];
            if(a[i]==1)
            one++;
            else
            {
                two++;
            }
        }
        if(one==two)
        {
            if(one%2)
            {
                cout<<"NO\n";
            }
            else
            {
               cout<<"YES\n"; 
            }
            continue; 
        }
        if(two%2)
        {
            if(one==0 || one==1)
            cout<<"NO\n";
            else if(one==2)
            cout<<"YES\n";
            else
            {
                one-=2;
                if(one%2)
                cout<<"NO\n";
                else
                {
                    cout<<"YES\n";
                }
                
            }
            
        }
        else
        {
            if(one%2)
            cout<<"NO\n";
            else
            {
                cout<<"YES\n";
            }
            
        }
        
        
            
        
        
        
    }
    
    return 0;  
}