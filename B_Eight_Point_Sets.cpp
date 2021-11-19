#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
    fast;
    int n=8;
    map<int,vector<int>> map;
    while(n--)
    {
        int a,b;
        cin>>a>>b;
        map[a].pb(b);
        
    }
    VI v;
    if(map.size()==3)
    {
        int k=0;
        for(auto& i:map)
        {
            VI temp;
            if(k==1 && i.second.size()!=2)
            {
                goto aa;
            }
            else if((k==2 || k==0)&&(i.second.size()!=3))
            goto aa;
            else
            {
                k++;
                for(int j:i.second)
                temp.pb(j);
            }
            sort(temp.begin(),temp.end());
            for(int m:temp)
            v.pb(m);
            
        }
        if((v[0]==v[3]&&v[0]==v[5]&&v[1]==v[6]&&v[2]==v[4]&&v[2]==v[7])&&(v[0]<v[1]&&v[1]<v[2]))
        cout<<"respectable";
        else
        {
            goto aa;
        }
        
    }
    else
    {   aa:
        cout<<"ugly";
    }
    return 0;
    
}