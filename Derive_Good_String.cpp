#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a[26]={0};
        For(i,s.size())
        {
            a[s[i]-'a']++;
        }
        int sum=0;
        For(i,26)
        {
            if(a[i]>1)
            sum+=a[i]-1;
        }
        cout<<sum<<"\n";
    }
    
    
    
    return 0;
    

    
    

    
    
}