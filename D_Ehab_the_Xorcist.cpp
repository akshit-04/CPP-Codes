#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int N = 1000010;
char arr[1111][1111];
int main()
{
    fast;
    ll u,v;
    cin>>u>>v;
    if(u%2!=v%2 || u>v)
    {
        cout<<-1;
        return 0;
    }
    if(u==v)
    {
        if(u==0)
        cout<<0;
        else
        {
            cout<<1<<"\n";
            cout<<u;
        }
        return 0;
        
    }
    ll temp=(v-u)/2;
    if (u&temp)
    {
        cout<<3<<endl;
        cout<<u<<" "<<temp<<" "<<temp<<endl;
    }
    else
    {
        cout<<2<<endl;
        cout<<(u^temp)<<" "<<temp<<endl;
    }
    
  
    
    
}