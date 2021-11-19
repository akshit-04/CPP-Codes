#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1e9+7;
char arr[1111][1111];
//int a[101],r[10001],ans[10001];
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
        {
            map[s[i]]++;
        }
        int cnt=0,cntodd=0;
        for(auto& i:map)
        {
            cnt+=i.second/2;
            if(i.second%2)
            cntodd++;
            
        }
        if(cnt>=cntodd)
        cout<<"YES\n";
        else
        {
            cout<<"NO\n";
        }
        
    }
    return 0;  
}
 