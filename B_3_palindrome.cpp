#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define For(i,n) for(int i=0;i<n;i++)
#define VI vector<int>
#define VL vector<ll>
#define fast ios_base::sync_with_stdio(0); cin.tie(0)
#define pb push_back
const int N = 1e5+1;
int main()
{
    int n;
    cin>>n;
    string ans="";
    For(i,n) 
    {
        if(i/2 % 2 == 1) 
        ans+='a';
        else
        ans+='b';
    }
    cout<<ans;
}