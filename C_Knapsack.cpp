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
    int t;
    cin>>t;
    aa:while(t--)
    {
        ll n,w;
        cin>>n>>w;
        VI a(n);
        map<int,VI> map;
        For(i,n)
        {
            cin>>a[i];
            map[a[i]].pb(i+1);
        }
        sort(a.begin(),a.end());
        ll sum=0,temp=(w+1)/2;
        int low1=lower_bound(a.begin(),a.end(),temp)-a.begin();
        if(a[low1]>w && low1==0)
        {
            cout<<-1<<"\n";
        }
        else
        {
            VI index;
            if(a[low1]>w || low1==n)
            low1--;
            for(int i=low1;i>=0;i--)
            {
                sum+=a[i];
                index.pb(map[a[i]].back());
                map[a[i]].pop_back();
                if(sum>=temp && sum<=w)
                {
                    cout<<index.size()<<"\n";
                    for(int j:index)
                    cout<<j<<" ";
                    cout<<"\n";
                    goto aa;
                }
            }
            cout<<-1<<"\n";
        } 
    }
	return 0;
}
  