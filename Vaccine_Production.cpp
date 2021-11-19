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
    int d1,d2,v1,v2,p;
    cin>>d1>>v1>>d2>>v2>>p;
    int v=v1+v2;
    if(d1==d2)
    {
        cout<<(p+v-1)/v;
    }
    else
    {
        if(d1<d2)
        {
            int d=d2-d1;
            if(d*v2>=p)
            cout<<(p+v2-1)/v2;
            else
            {
                p-=(d*v2);
                cout<<(p+v-1)/v;
            }
            
        }
        else
        {
            int d=d1-d2;
            if(d*v1>=p)
            cout<<(p+v1-1)/v1;
            else
            {
                p-=(d*v1);
                cout<<(p+v-1)/v;
            } 
        }
        
    }
    

        
        
    
    return 0;  
}