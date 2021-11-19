
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,curr,m=INT_MIN;
        cin>>n>>k>>curr;
        m=max(curr,m);
        for(int i=1;i<k;i++)
        {
            int a;
            cin>>a;
            m=max(((a-curr)/2)+1,m);
            curr=a;
        }
        m=max(n-curr+1,m);
        cout<<m<<endl;
    }
}