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
        vector<ll> v;
        For (k,11)
        {
            For (i,(1LL << k)) 
            {
                ll c = 0;
                int c1 = 0, c2 = 0;
                For (j,k) 
                {
                    if (i & (1 << j))
                    c *= 10, c += 4, c1++;
                    else
                    c *= 10, c += 7, c2++;
                }
                if (c1 == c2)
                v.push_back(c);
            }
        }
        
        sort(v.begin(),v.end());
        int x;
        cin >> x;
        //cout << v.size();
        cout << v[lower_bound(v.begin(),v.end(), x) - v.begin()] << "\n";
    }
    return 0;
    
}