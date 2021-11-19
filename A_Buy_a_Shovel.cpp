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
    int k,r,a,b=10;
    cin>>k>>r;
    for(int i=1;i<11;i++)
    {
        if((k*i)%10==0)
        {
            a=i;
            break;
        }
    }
    for(int i=1;i<11;i++)
    {
        if(((k*i)-r)%10==0)
        {
            b=i;
            break;
        }
    }
    cout<<min(a,b);
}