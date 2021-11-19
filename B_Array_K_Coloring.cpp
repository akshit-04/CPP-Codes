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
    int n,k;
    cin>>n>>k;
    int a[n];
    map<int, VI> map;
    For(i,n)
    {
        cin>>a[i];
        map[a[i]].push_back(i);
    }
    int j=0;
    for(auto i:map)
    {
        if(i.second.size()>k)
        {
            cout<<"NO";
            return 0;

        }
        else
        {
            For(m,i.second.size())
            {
                a[i.second[m]]=j%k+1;
                j++;
            }
        }
        
    }
    cout<<"YES\n";
    For(i,n)
    cout<<a[i]<<" ";
    
    

    
    
}