#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b,p,f;
        cin>>b>>p>>f;
        int h,c;
        cin>>h>>c;
        int ans1=0,ans;
        if(h>c)
        {
            ans=min(b/2,p);
            b-=(ans*2);
            ans1+=(ans*h);
            ans=min(b/2,f);
            ans1+=(ans*c);
        }
        else
        {
            ans=min(b/2,f);
            b-=(ans*2);
            ans1+=(ans*c);
            ans=min(b/2,p);
            ans1+=(ans*h);
        }
        cout<<ans1<<endl;
    }
}