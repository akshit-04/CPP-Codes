#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        ll l=0,ans=0;
        string s;
        cin>>x>>s;
        For(i,x)
        { 
            int k=s[i]-'0'-1;
            if(s.size()>=x)
            {
                l=ans+s.size();
				l-=i+1;
				ans+=k*l;
				ans%=MOD;
            }
            else
            {
                int size=s.size();
				For(m,k)
				{
                    for(int j=i+1;j<size;j++)
                    s+=s[j];
                }
            }
            

        }
        cout<<(ans+s.size())%MOD<<"\n";
    }

    return 0;
    
}