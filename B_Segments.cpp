#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=3;i<n;i++)
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
        int n;
        cin>>n;
        VI v(n+1);
        v[1]=1;
        v[2]=2;
        For(i,n+1)
        v[i]=i+v[i-2];
        cout<<v[n];
        

    }
    return 0;
    
}