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
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int i=0,cnt=0;
        while(i<n-1)
        {
            if(s[i]=='R' && s[i+1]=='U')
            {
                cnt++;
                i+=2;
            }
            else if(s[i]=='U' && s[i+1]=='R')
            {
                cnt++;
                i+=2;
            }
            else
            {
                cnt++;
                i++;
            }
            
        }
        if(i==n-1)
        cnt++;
        cout<<cnt;

        

    }
    
    
    
    return 0;
    

    
    

    
    
}