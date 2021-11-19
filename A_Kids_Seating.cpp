#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=1;i<=n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n,cnt=0;
        cin>>n;
        /*int cnt=1;
        VI v;
        cout<<4<<" ";
        v.pb(4);
        for(int i=6;i<=4*n;i+=2)
        {
            int k=i;
            bool flag=true;
            for(auto j:v)
            {
                if(k%j==0)
                {
                    flag=false;
                    break;
                }
            }
            if(flag)
            {
                cout<<i<<" ";
                v.pb(i);
                cnt++;
            }
            if(cnt==n)
            break;
        }*/
        for(int i=4*n;cnt<n;i-=2)
        {cout<<i<<" ";
        cnt++;}
        
        cout<<"\n";
        
        
        
        
    }
    return 0;
    
}