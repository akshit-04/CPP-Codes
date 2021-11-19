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
    string s;
    int q;
    cin>>s>>q;
    vector<set<int>> v(26);
    For(i,s.size())
    v[s[i]-'a'].insert(i);
    while(q--)
    {
        int no;
        cin>>no;
        if(no==1)
        {
            int n;
            char c;
            cin>>n>>c;
            n-=1;
            v[s[n]-'a'].erase(n);
            s[n]=c;
            v[c-'a'].insert(n);
        }
        else
        {
            int a,b,cnt=0;
            cin>>a>>b;
            a-=1;
            b-=1;
            For(i,26)
            {
                auto it=v[i].lower_bound(a);
                if(it!=v[i].end() && *it<=b)
                cnt++;
            }
            cout<<cnt<<"\n";
        }
        
    }

    
    

    
    
}