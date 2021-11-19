#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
// std::map<int,int> mp;
bool solve(map<int,int> &mp)
{
    set<int> s;
    int mx=INT_MIN,mn=INT_MAX;
    vector<int> v,v1;
    for(auto& i:mp)
    {
        if(i.second>0)
       v.push_back(i.second);
       
    }
    sort(v.begin(),v.end());
    if(v.size()==1)
    return true;
    if(v.size()>=3)
    {
        int temp=v[1];
        for(int i=2;i<v.size()-1;i++)
        {
            if(v[i]!=temp)
                return false;
        }
        if((v[0]-1==0||v[0]-1==v[1])&&(v[v.size()-1]==v[1]))
            return true;
        if(v[0]==v[1]&&v[v.size()-1]-1==v[1])
            return true;
        return false;
    }
    else
    {
        if(v[0]-1==0||v[0]-1==v[1]||v[1]-1==v[0])
            return true;
        
        return false;
    }
    
    
    
    

}
int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); 
    int n;
    cin>>n;
    vector<int> a(n);
    bool flag=true;
    std::map<int,int> mp;
    For(i,n)
    {
        cin>>a[i];
        mp[a[i]]++;
        if(mp[a[i]]>1)
        flag=false;
    }
    if(n==1)
    cout<<n;
    else if(flag||solve(mp))
    cout<<n;
    else
    {
        for(int i=n-1;i>=0;i--)
        {
            mp[a[i]]--;
            //cout<<i<<" ";
            if(solve(mp))
            {
                cout<<i;
                break;
            }
            
        }
    }
    
    
    return 0;
    
}