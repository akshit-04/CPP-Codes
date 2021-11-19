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
        int n,ans[3]={0,0,0};
        cin>>n;
        string s[n];
        For(i,n)
        {
            cin>>s[i];
            For(j,n)
            {
                if(s[i][j]=='X')
                    ans[(i+j)%3]++;
            }
        }
        int k=min_element(ans, ans+3)-ans;
        For(i,n)
        {
            For(j,n)
            {
                if(s[i][j]=='X' && (i+j)%3==k)
                    s[i][j]='O';
            }
            cout<<s[i]<<"\n";
        }
        
        

        
        
        

    }
    
    
    
    return 0;
    

    
    

    
    
}