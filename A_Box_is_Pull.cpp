#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(a==c)
        cout<<abs(b-d)<<"\n";
        else if(b==d)
        cout<<abs(a-c)<<"\n";
        else
        {
            cout<<abs(a-c)+abs(b-d)+2<<"\n";
        }
    }


    return 0;
    
}