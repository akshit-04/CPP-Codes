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
        int n;
        cin>>n;
        int mx1,mx2,mx3;
        int mn1,mn2,mn3;
        cin>>mn1>>mx1>>mn2>>mx2>>mn3>>mx3;
        int a=mn1,b=mn2,c=mn3;
        while(a+b+c<n)
        {
            if(a<mx1)
            a++;
            else if(b<mx2)
            b++;
            else
            c++;
        }
        cout<<a<<" "<<b<<" "<<c;
        
    }
    return 0;
    
}