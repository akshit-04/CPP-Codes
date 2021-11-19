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
    int n;
    cin>>n;
    vector<pair<int, pair<int,int>>> v;
    For(i,n)
    {
        int k,sum=0;
        cin>>k;
        int a[k];
        For(j,k)
        {
            cin>>a[j];
            sum+=a[j];
        }
        For(j,k)
        {
            v.push_back(make_pair(sum-a[j],make_pair(i,j)));
        }
    } 
    sort(v.begin(),v.end());
    For(i,v.size()-1)
    {
        if(v[i].first == v[i+1].first && (v[i].second.first != v[i+1].second.first))
        {
            cout<<"YES\n";
            cout<<v[i].second.first+1<<" "<<v[i].second.second+1<<"\n";
            cout<<v[i+1].second.first+1<<" "<<v[i+1].second.second+1<<"\n";
            return 0;
        }
    }
    cout<<"NO";
    return 0;
}