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
        int n,k,cnt=0;
        cin>>n>>k;
        while(n--)
        {
            string s;
            cin>>s;
            VI a;
            For(i,s.size())
            a.pb(s[i]-'0');
            sort(a.begin(),a.end());
            int num=0;
            for(int c:a)
            {
                if(c==num)
                {
                    num++;
                }

            }
            if(num>k)
            cnt++;

        } 
        cout<<cnt<<"\n";
    }

    return 0;
    
}