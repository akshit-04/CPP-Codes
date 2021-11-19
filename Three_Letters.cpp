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
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        map<char,int> map;
        For(i,s.size())
        map[s[i]]++;
        int pair=0,single=0,ans=0;
        for(auto& i:map)
        {
            if(i.second%2)
            {
                pair+=(i.second/2);
                single+=1;
            }
            else
            {
               pair+=(i.second/2); 
            }
            
        }
        ans+=min(pair,single);
        if(single<pair)
        {
            pair-=single;
            ans+=pair/3;
        }
        cout<<ans<<"\n";


        
        
    }
    
    return 0;  
}