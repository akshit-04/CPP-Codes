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
    int t=1;
    //cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.size();
        ll cnt=0;
        For(i,n)
        {
            if(s[i]%4==0)
            cnt++;
        }
        for(int i=1;i<n;i++)
        {
            int k=(s[i-1]-'0')*10+(s[i]-'0');
            if(k%4==0)
            cnt+=i;
        }
        cout<<cnt<<"\n";
    }
    return 0;
    
}