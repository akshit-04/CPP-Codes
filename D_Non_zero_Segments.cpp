#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        VI a(n);
        For(i,n)
        cin>>a[i];
        set<ll> s;
        ll sum=0;
        s.insert(0);
        int cnt=0;
        For(i,n)
        {
            sum+=a[i];
            if(s.find(sum)!=s.end())
            {
                cnt++;
                s.clear();
                s.insert(0);
                sum=a[i];
            }
            s.insert(sum);
        }
        cout<<cnt<<"\n";
        
    }

    return 0;
    
}