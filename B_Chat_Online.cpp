#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];
int main()
{
    fast;
    int p,q,l,r,cnt=0;
    cin>>p>>q>>l>>r;
    vector<pair<int,int>> X,Z;
    For(i,p)
    {
        int a,b;
        cin>>a>>b;
        X.push_back(make_pair(a,b));
    }
    For(i,q)
    {
        int a,b;
        cin>>a>>b;
        Z.push_back(make_pair(a,b));
    }
    for(int i=l;i<=r;i++)
    {
        vector<pair<int,int>> temp(Z.begin(),Z.end());
        bool flag=false;
        For(j,temp.size())
        {
            temp[j].first+=i;
            temp[j].second+=i;
        }
        For(j,temp.size())
        {
            For(k,X.size())
            {
                if((temp[j].first>=X[k].first && temp[j].first<=X[k].second) || (X[k].first>=temp[j].first && temp[j].second>=X[k].first))
                flag = true;
            }
        }
        if(flag)
        cnt++;
    }
    cout<<cnt<<"\n";
    
    

    
    
}