#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m=INT_MIN;
    cin>>n;
    map<int,int> mf,mm;
    while(n--)
    {
        char c;
        int a,b;
        cin>>c>>a>>b;
        if(c=='M')
        {
            for(int i=a;i<=b;i++)
            mm[i]++;
        }
        else
        {
            for(int i=a;i<=b;i++)
            mf[i]++;
        }
        
    }
    for(int i=1;i<=366;i++)
    {
        m=max((2*min(mf[i],mm[i])),m);
    }
    cout<<m<<endl;
}