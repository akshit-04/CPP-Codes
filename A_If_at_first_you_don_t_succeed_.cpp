#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int N = 1e5+1;

int main()
{
    int t=1;
    //cin>>t;
    while(t--)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        if(c>a || c>b)
        cout<<-1;
        else
        {
            a-=c;
            b-=c;
            if(a+b+c>=n)
            cout<<-1;
            else
            {
                cout<<n-(a+b+c);
            }
            
        }
    }
    
}