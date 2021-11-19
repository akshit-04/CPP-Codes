#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define mp make_pair
#define pb push_back
#define fast ios_base::sync_with_stdio(0); cin.tie(0)

int main() {
	fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n;
        string s;
        cin>>n>>s;
        VI v;
        For(i,n)
        {
            int a=s[i]-'0';
            if(a==0 || a==1)
            continue;
            else if(a==2 || a==3 || a==5 || a==7)
            v.pb(a);
            else if(a==4)
            {
                v.pb(3);
                v.pb(2);
                v.pb(2);
            }
            else if(a==6)
            {
                v.pb(5);
                v.pb(3);
            }
            else if(a==8)
            {
                v.pb(7);
                v.pb(2);
                v.pb(2);
                v.pb(2);
            }
            else
            {
                v.pb(7);
                v.pb(3);
                v.pb(3);
                v.pb(2);
            }
            
            
        }
        sort(v.begin(),v.end(),greater<int>());
        For(i,v.size())
        cout<<v[i];
        
        
        
    }
	return 0;
}
  