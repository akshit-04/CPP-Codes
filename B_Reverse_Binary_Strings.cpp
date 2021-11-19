#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n-1;i++)
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
        string s;
        cin>>n>>s;
        For(i,n)
        {
            if(s[i]==s[i+1])
            cnt++;
        }
        cout<<(cnt+1)/2<<"\n";
        
        
        
    }
    return 0;
    
}