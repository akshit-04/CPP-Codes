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
    int t;
    cin>>t;
    VI v;
    int map[200007],l=0,r=1;
    while(t--)
    {
        char c;
        int index;
        cin>>c>>index;
        if(c=='L')
        {
            //v.insert(v.begin(),index);
            map[index]=l;
            l--;
        }
        else if(c=='R')
        {
            //v.pb(index);
            map[index]=r;
            r++;
        }
        else
        {
            int left,right;
           
                left=map[index] - (l+1);
                right=r-1 - map[index];
            cout<<min(left,right)<<"\n";
        }
        
    }
}