#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
const int MOD = 1000000007;
char arr[1111][1111];
//int a[101],r[10001],ans[10001];
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        VI a(n),b(n);
        For(i,n)
        {
            cin>>a[i];
            b[i]=a[i];
        }
        sort(b.begin(),b.end(),greater<int>());
        map<int,VI> map;
        int cnt=1;
        For(i,n)
        {
            map[b[i]].push_back(cnt);
            cnt++;
        }
        For(i,n)
        {
            cout<<map[a[i]].front()<<" ";
            map[a[i]].erase(map[a[i]].begin());
        }
        cout<<"\n";


    }
    return 0;  
}